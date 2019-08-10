from collections import defaultdict
S = defaultdict(int)
for i in range(int(input())):
    S["".join(sorted(input()))] += 1
print(sum([sum(range(1, x)) for x in S.values()]))