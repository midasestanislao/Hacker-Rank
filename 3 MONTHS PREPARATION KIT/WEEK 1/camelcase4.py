import sys

def camel_case(line):
    y = line[2:3]
    arr = list(line[4:])  
    if line[:1] == 'S':
        for i, char in enumerate(arr):
            if char.isupper():  
                arr[i] = ' ' + char.lower() 
        if y == 'M':
            print(''.join(arr)[:-2])
        else:
            print(''.join(arr).lstrip()) 
    else: # if x == c
        for i, char in enumerate(arr):
            if char == ' ':
                arr[i+1] = arr[i+1].upper()
        if y == 'M':
            print(''.join(arr).replace(' ', '') + '()')
        else:
            if y == 'C':
                arr[0] = arr[0].upper()
            print(''.join(arr).replace(' ', ''))

for line in sys.stdin:
    line = line.strip()
    camel_case(line)