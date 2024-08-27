#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'timeConversion' function below.
#
# The function is expected to return a STRING.
# The function accepts STRING s as parameter.
#

def timeConversion(s):
    # Write your code here
    time = s[len(s)-2:]
    s = s[:-2]
    
    times = s.split(":")
    
    if times[0] != "12" and time == "PM":
        number = int(times[0]) + 12
        times[0] = str(number)
        return ":".join(times)
        
    elif times[0] == "12" and time == "AM":
        times[0] = "00"
        return ":".join(times)
        
    else:
        return s
        

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    s = input()

    result = timeConversion(s)

    fptr.write(result + '\n')

    fptr.close()
