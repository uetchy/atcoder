n = 6
W = 15
w = [11, 2, 3, 5, 1, 4]
v = [15, 3, 1, 8, 2, 4]


def rec(i, j):
    if i == n:
        return 0
    elif j < w[i]:
        return rec(i + 1, j)
    else:
        return max(rec(i + 1, j), rec(i + 1, j - w[i]) + v[i])


if __name__ == '__main__':
    print(rec(0, W))
