#!/usr/bin/env python3

N = int(input())
A = list(map(int, input().split()))
B = list(map(int, input().split()))
C = list(map(int, input().split()))

s = 0
for i in A:
    j = i - 1
    s += B[j]
    if A[j] - A[j - 1] == 1:
        s += C[j - 1]
print(s)