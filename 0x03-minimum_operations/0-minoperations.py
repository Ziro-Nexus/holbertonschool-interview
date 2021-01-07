#!/usr/bin/python3

''' get the minium operations '''

def minOperations(n):
    '''
        trying O(1)
    '''
    res = 0
    if n == 2:
        return 2
    if n % 2 == 0:
        # if the middle of the middle is odd
        if int(n/2) % 2 == 0 and int(n/2) > 2:
            return int((n/2)+1 )
        if int(n/2) % 2 == 0 and int(n/2) == 2:
            return int((n/2)+2)
        # if the middle of the middle if not odd
        if int(n % 2) == 0 and int(n/2) != 0:
            return int((n/2)+2)

    return res
