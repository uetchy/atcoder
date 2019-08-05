#!/usr/bin/env python3

from functools import lru_cache
import sys


@lru_cache(maxsize=None)
def fib(n):
    if n < 2:
        return n
    return fib(n - 1) + fib(n - 2)


if __name__ == '__main__':
    N, M = list(map(int, input().split()))
    a = []
    for i in range(M):
        a.append(int(input()))

    S = [0]
    for i in range(0, M):
        S.append(a[i] - S[-1])
    S.append(N - a[-1])

    res = 1
    for i in S:
        if i >= 3:
            res *= fib(i) % 1000000007
    print(res % 1000000007)
