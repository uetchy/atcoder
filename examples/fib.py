#!/usr/bin/env python3

from functools import lru_cache


@lru_cache(maxsize=None)
def fib(n):
    if n < 2:
        return n
    return fib(n - 1) + fib(n - 2)


if __name__ == '__main__':
    print([fib(n) for n in range(100)])
    hits = fib.cache_info().hits
    misses = fib.cache_info().misses
    hit_rate = hits / (hits + misses)
    print('hit_rate', f"{hit_rate:.2f}")
