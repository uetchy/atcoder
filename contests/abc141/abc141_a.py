#!/usr/bin/env python3

d = ['Sunny', 'Cloudy', 'Rainy']
N = input()
i = d.index(N)
print(d[(i + 1) % 3])
