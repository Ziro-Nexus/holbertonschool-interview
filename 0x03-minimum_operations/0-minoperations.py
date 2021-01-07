#!/usr/bin/python3

''' get the minium operations '''


def minOperations(n):
    """
    Solve
    """
    c = 2
    ch = 2
    copy = 1
    if n <= 1:
        return 0
    else:
        while ch < n:
            if n % ch == 0:
                copy = ch
                c += 1
            ch += copy
            c += 1

    return c
