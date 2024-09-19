#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'pageCount' function below.
#
# The function is expected to return an INTEGER.
# The function accepts following parameters:
#  1. INTEGER n
#  2. INTEGER p
#

def pageCount(n, p):
    # Write your code here
    # n total of pages in teh book
    # p the page number to turn to
    
    numPagina = int(p/2)
    paginaFinal = int(n/2)
    paginaInicial = 0
    inicio = numPagina - paginaInicial
    final = paginaFinal - numPagina
    if (inicio) <= (final):
        return inicio
    else:
        return final
    
    # return min(p//2, n//2 - p//2) SOLUCION MAS OPTIMIZADA
    
    # 0 1 2 3 4
    # 0 2 4 6 8 10
    # 1 3 5 7 9 11
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input().strip())

    p = int(input().strip())

    result = pageCount(n, p)

    fptr.write(str(result) + '\n')

    fptr.close()
