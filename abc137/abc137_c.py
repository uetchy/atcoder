N = int(input())
S = {}
for i in range(N):
    j = sorted(input())
    if j in S:
        S[j] += 1
    else:
        S[j] = 0
print(sum)
