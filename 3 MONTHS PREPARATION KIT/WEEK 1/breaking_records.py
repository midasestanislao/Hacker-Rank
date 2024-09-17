#!/bin/python3

import math
import os
import random
import re
import sys


def breakingRecords(scores):
    # Write your code here
    maximun, minimun = scores[0], scores[0]
    max_count, min_count = 0, 0
    arr = []
    
    for element in scores:
        if element > maximun:
            maximun = element
            max_count += 1
        elif element < minimun:
            minimun = element
            min_count += 1
    
    arr.append(max_count)
    arr.append(min_count)
    
    return arr

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input().strip())

    scores = list(map(int, input().rstrip().split()))

    result = breakingRecords(scores)

    fptr.write(' '.join(map(str, result)))
    fptr.write('\n')

    fptr.close()
