#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'marsExploration' function below.
#
# The function is expected to return an INTEGER.
# The function accepts STRING s as parameter.
#

def marsExploration(s):
    # Write your code here
    n = len(s)
    cont = 0
    for i in range(0, n, 3):
        sub = s[i:i+3]
        if sub[0] != "S":
            cont += 1
        if sub[1] != "O":
            cont += 1
        if sub[2] != "S":
            cont += 1
        
    return cont

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    s = input()

    result = marsExploration(s)

    fptr.write(str(result) + '\n')

    fptr.close()
