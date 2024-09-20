#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'gridChallenge' function below.
#
# The function is expected to return a STRING.
# The function accepts STRING_ARRAY grid as parameter.
#

def gridChallenge(grid):
    # Write your code here
    sortedArray= []
    for element in grid:
        listElem = list(element)
        listElem.sort()
        sortedArray.append(listElem)
    
    for i in range(len(sortedArray[0])): #filas
        for j in range(len(grid)-1):
            if sortedArray[j][i] > sortedArray[j+1][i]:
                return "NO"
    
    return "YES"
            
    

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    t = int(input().strip())

    for t_itr in range(t):
        n = int(input().strip())

        grid = []

        for _ in range(n):
            grid_item = input()
            grid.append(grid_item)

        result = gridChallenge(grid)

        fptr.write(result + '\n')

    fptr.close()
