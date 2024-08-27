#!/bin/python3

import math
import os
import random
import re
import sys
import bisect

# from itertools import chain, combinations
#
# Complete the 'maximumSum' function below.
#
# The function is expected to return a LONG_INTEGER.
# The function accepts following parameters:
#  1. LONG_INTEGER_ARRAY a
#  2. LONG_INTEGER m
#

# def powerset(iterable):
    
#     s = list(iterable)
#     return chain.from_iterable(combinations(s, r) for r in range(1, len(s)+1))


# def maximumSum(a, m):
#     # Write your code here
#     maxValue = 0
#     subsets = list(powerset(a))
#     for subset in subsets:
#         if sum(subset) % m > maxValue:
#             maxValue = sum(subset) % m
    
#     return maxValue
def maximumSum(a, m):
    maxValue = 0
    prefix = 0
    prefix_set = []
    
    for num in a:
        prefix = (prefix + num) % m
        maxValue = max(maxValue, prefix)
        
        # Buscamos la menor suma de prefijo que sea mayor que el prefijo actual
        idx = bisect.bisect_right(prefix_set, prefix)
        
        if idx < len(prefix_set):
            maxValue = max(maxValue, (prefix - prefix_set[idx] + m) % m)
        
        # Insertamos el prefijo en orden
        bisect.insort(prefix_set, prefix)
    
    return maxValue

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    q = int(input().strip())

    for q_itr in range(q):
        first_multiple_input = input().rstrip().split()

        n = int(first_multiple_input[0])

        m = int(first_multiple_input[1])

        a = list(map(int, input().rstrip().split()))

        result = maximumSum(a, m)

        fptr.write(str(result) + '\n')

    fptr.close()
