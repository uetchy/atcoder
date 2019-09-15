#!/usr/bin/env python3


def hamming_weight(n):
    c = 0
    while n:
        c += 1
        n &= n - 1

    return c


def hamming_weight_recursive(n, c=0):
    if n == 0:
        return c
    return hamming_weight_recursive(n & n - 1, c + 1)


if __name__ == '__main__':
    examples = '1010100100101010101101010111111100101010010101010101010101010101001010100100100100101010010101010101011111'
    print(hamming_weight_recursive(int(examples, 2)))
