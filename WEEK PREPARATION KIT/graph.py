from collections import deque
# 4 2 4 es numero de nodos 2 es numero de arista
# 1 2
# 1 3
n = input().split()
nodes = int(n[0])
edges = int(n[1])

graph = {}

for i in range(edges):
    data = input().split()
    if data[0] not in graph:
        graph[data[0]] = []
    if data[1] not in graph:
        graph[data[1]] = []

    graph[data[0]].append(data[1])
    graph[data[1]].append(data[0])

def bfs(graph, start):
    visitado = set()
    queue = deque([start])

    camino = []
    while deque:
        nodo = queue.popleft()
        if nodo is not visitado:
            visitado.add(nodo)
            camino.append(nodo)

            for vecino in graph[nodo]:
                if vecino not in visitado:
                    queue.append(vecino)
        
    return camino

inicio = int(input())
resultado = bfs(graph, inicio)

print(resultado)
            
    