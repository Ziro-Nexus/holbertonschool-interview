#!/usr/bin/python3
"""
0. Rain
"""


def rain(walls):
    """
    doc
    """
    length = len(walls)
    res = 0

    for i in range(1, length - 1):
        left = walls[i]
        for j in range(i):
            left = max(left, walls[j])

        right = walls[i]

        for j in range(i + 1, length):
            right = max(right, walls[j])

        res = res + (min(left, right) - walls[i])
    return res
