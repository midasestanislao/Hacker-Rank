import math
import os
import random
import re
import sys
# n = 99
# divisor = 3
# d = 33 = 99//3
# n = 99
# divisor = 5
# d = 19 = 99//5
# 
def sumatoria(n, divisor):
    cantidad_Multiplos = n//divisor
    return divisor*cantidad_Multiplos(cantidad_Multiplos+1)//2
    
    # k (divisor) = 3 o 5
    # Sumatoria natural de n (de 1 hasta n): (n/2)(n+1)
    # Cantidad de multiplos de k en n = m = n//k
    # Sumatoria natural de multiplos de k en n: k*(m/2)(m+1)

if __name__ == '__main__':
    t = int(input().strip())

    for t_itr in range(t):
        n = int(input().strip())
        suma = sumatoria(n-1,3) + sumatoria(n-1,5) - sumatoria(n-1,3*5)
        print(suma)
