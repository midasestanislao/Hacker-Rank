def bloquesLego(n, m):
    modulo = 10**9 + 7
    valores = [1, 1, 2, 4]
    
    
    while len(valores) <= m:
        valores.append(sum(valores[-4:]) % modulo)
    
    total = [pow(val, n, modulo) for val in valores]
    no_solido = [0] * (m + 1)
    
    for actual in range(2, m + 1):
        tmp = []
        for ancho_izq in range(1, actual):
            l = total[ancho_izq] - no_solido[ancho_izq]
            r = total[actual - ancho_izq]
            tmp.append(l * r)
        no_solido[actual] = sum(tmp) % modulo
    
    return (total[m] - no_sólido[m]) % modulo

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    t = int(input().strip())

    for t_itr in range(t):
        primera_entrada = input().rstrip().split()

        n = int(primera_entrada[0])
        m = int(primera_entrada[1])

        resultado = bloquesLego(n, m)

        fptr.write(str(resultado) + '\n')

    fptr.close()
