#!/usr/bin/python3
'''doc.'''
import sys


def get_match(line):
    '''doc.'''
    try:
        line = line[:-1]
        words = line.split(" ")
        size[0] += int(words[-1])
        code = int(words[-2])
        if code in logs:
            logs[code] += 1
    except:
        pass


def p_stats():
    '''doc'''
    print("File size: {}".format(size[0]))
    for k in sorted(logs.keys()):
        if logs[k]:
            print("{}: {}".format(k, logs[k]))


if __name__ == "__main__":
    size = [0]
    logs = {200: 0, 301: 0, 400: 0, 401: 0, 403: 0, 404: 0, 405: 0, 500: 0}
    i = 1
    try:
        for line in sys.stdin:
            get_match(line)
            if i % 10 == 0:
                p_stats()
            i += 1
    except KeyboardInterrupt:
        p_stats()
        raise
    p_stats()
