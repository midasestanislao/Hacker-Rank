#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'cookies' function below.
#
# The function is expected to return an INTEGER.
# The function accepts following parameters:
#  1. INTEGER k
#  2. INTEGER_ARRAY A
#



def cookies(k, A):
    # Write your code here
    iteration = 0
    A.sort()
    while k > A[0]:
        if len(A) > 2:
            A.sort()
            cookie = A[0] + 2 * A[1]
            sortArr = A[2:] #Eliminamos los dos primeros elementos
            sortArr.insert(0, cookie)
            sortArr.sort()
            A = sortArr
            iteration +=1
        else:
            return -1
    
    return iteration
        
        
    
    

if __name__ == '__main__':
    

    first_multiple_input = input().rstrip().split()

    n = int(first_multiple_input[0])

    k = int(first_multiple_input[1])

    A = list(map(int, input().rstrip().split()))

    result = cookies(k, A)

    print(result)
