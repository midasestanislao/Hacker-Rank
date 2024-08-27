def sum_fib(x):
    suma = 0
    anterior = 0
    actual = 1
    while actual <= x:
        if actual % 2 == 0:
            suma += actual
        
        siguiente = anterior + actual
        anterior = actual
        actual = siguiente
    
    return suma


if __name__ == '__main__':
    t = int(input().strip())

    for t_itr in range(t):
        n = int(input().strip())
        print(sum_fib(n))