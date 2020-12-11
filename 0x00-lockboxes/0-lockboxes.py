#!/usr/bin/python3

'''

Unlock Boxes problem of interview

'''


def canUnlockAll(boxes):
    '''
    Check if all bpoxes can be open
    '''
    locker = {}
    opened = []

    for nbox in range(len(boxes)):
        locker.update({nbox: boxes[nbox]})

    lock2 = locker.copy()

    for (nbox, box) in zip(locker.keys(), locker.values()):
        if box == []:
            continue
        for key in box:
            if key not in opened:
                if key > len(boxes):
                    break
                if nbox == key:
                    break
                opened.append(key)
                lock2[key] = "open"

    lock2[0] = "open"

    for result in lock2.values():
        if result != "open":
            return False

    return True
