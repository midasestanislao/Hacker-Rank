#!/bin/python3

import math
import os
import random
import re
import sys
# INPUT
# 2
# 4 2
# 1 2
# 1 3
# 1
# 3 1
# 2 3
# 2
# OUTPUT
# 6 6 -1
# -1 6

#
# Complete the 'bfs' function below.
#
# The function is expected to return an INTEGER_ARRAY.
# The function accepts following parameters:
#  1. INTEGER n
#  2. INTEGER m
#  3. 2D_INTEGER_ARRAY edges
#  4. INTEGER s
#

def bfs(n, m, edges, s):
    # Write your code here
    grafo = [[] for i in range(n+1)]
    for a, b in edges:
        grafo[a].append(b)
        grafo[b].append(a)
    
    queue = []
    visited = []
    distances = [-1] * (n+1)
    distances[s] = 0
    queue.append(s)
    visited.append(s)
    
    while queue:
        nodo = queue.pop(0)
        for vecino in grafo[nodo]:
            if distances[vecino]==-1:
                distances[vecino] = distances[nodo] + 6
                queue.append(vecino)
    
    distances.remove(0)
    return distances[1:]
    

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    q = int(input().strip())

    for q_itr in range(q):
        first_multiple_input = input().rstrip().split()

        n = int(first_multiple_input[0])

        m = int(first_multiple_input[1])

        edges = []

        for _ in range(m):
            edges.append(list(map(int, input().rstrip().split())))

        s = int(input().strip())

        result = bfs(n, m, edges, s)

        fptr.write(' '.join(map(str, result)))
        fptr.write('\n')

    fptr.close()
