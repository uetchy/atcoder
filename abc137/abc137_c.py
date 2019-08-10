from collections import defaultdict
N = int(input())
S = defaultdict(int)
for i in range(N):
    S["".join(sorted(input()))] += 1
print(sum([sum(range(1, x)) for x in S.values()]))