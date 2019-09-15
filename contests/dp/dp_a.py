#!/usr/bin/env python3

N = int(input())
H = list(map(int, input().split()))
D = [0, abs(H[1] - H[0])]
for i in range(2, N):
    D.append(min(abs(H[i] - H[i - 1]) + D[i - 1], abs(H[i] - H[i - 2]) + D[i - 2]))
print(D[-1])