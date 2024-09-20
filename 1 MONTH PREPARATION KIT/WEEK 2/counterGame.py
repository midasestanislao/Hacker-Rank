#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'counterGame' function below.
#
# The function is expected to return a STRING.
# The function accepts LONG_INTEGER n as parameter.
#

def largest_exp(n):
    num = 2
    while num*2 <= n:
        num *= 2
    return num
        
def counterGame(n):
    count = 0 # Turn 
    while n >= 2:
        count += 1
        largest = largest_exp(n)
        if largest < n:
            n -= largest
        else:
            n = n/2
    
    if count % 2:
        return "Louise"
    else:
        return "Richard"
        
    
    
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    t = int(input().strip())

    for t_itr in range(t):
        n = int(input().strip())

        result = counterGame(n)

        fptr.write(result + '\n')

    fptr.close()
   
