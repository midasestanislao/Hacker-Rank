from collections import deque
 
graph = {
    '5' : ['3', '7'],
    '3' : ['2', '4'],
    '7' : ['8'],
    '2' : [],
    '4' : ['8'],
    '8' : []
    
}
visited = []
queue = []
def breath_first_search(inicio, graph):
    queue.append(inicio)
    visited.append(inicio)
    
    while queue:
        nodo = queue.pop(0)
        for vecino in graph[nodo]:
            if vecino not in visited:
                queue.append(vecino)
                visited.append(vecino)
        
    return visited
        
    
inicio = '5'
print(breath_first_search(inicio, graph))