#!/bin/python3

# Active traders hackerrank
import math
import os
import random
import re
import sys



#
# Complete the 'mostActive' function below.
#
# The function is expected to return a STRING_ARRAY.
# The function accepts STRING_ARRAY customers as parameter.
#

from collections import Counter

def mostActive(customers):
    # Write your code here
    customers_count = Counter(customers)
    names = set(name for name, count in customers_count.items() if count/len(customers) >= 0.05)
    names = list(names)
    names.sort()
    return names

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    customers_count = int(input().strip())

    customers = []

    for _ in range(customers_count):
        customers_item = input()
        customers.append(customers_item)

    result = mostActive(customers)

    fptr.write('\n'.join(result))
    fptr.write('\n')

    fptr.close()
