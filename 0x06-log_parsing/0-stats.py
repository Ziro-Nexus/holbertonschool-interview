#!/usr/bin/python3
"""
Code
"""

import sys

size = 0
codes = {"200": 0, "301": 0, "400": 0, "401": 0,
                "403": 0, "404": 0, "405": 0, "500": 0}

try:
    for i, line in enumerate(sys.stdin, 1):
        splited = line.split(" ")
        if len(splited) < 2:
            continue
        if splited[-2] in codes:
            codes[splited[-2]] += 1
        size += eval(splited[-1])
        if i % 10 == 0:
            print("File size: {}".format(size))
            for key, value in sorted(codes.items()):
                if value > 0:
                    print("{}: {}".format(key, value))
finally:
    print("File size: {}".format(size))
    for key, value in sorted(codes.items()):
        if value > 0:
            print("{}: {}".format(key, value))
