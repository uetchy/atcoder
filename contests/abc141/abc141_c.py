#!/usr/bin/env python3
from collections import defaultdict

[N, K, Q] = map(int, input().split())

score = defaultdict(int)
for _ in range(Q):
    n = int(input())
    score[n - 1] += 1
for i in range(N):
    if K - (Q - score[i]) > 0:
        print('Yes')
    else:
        print('No')
