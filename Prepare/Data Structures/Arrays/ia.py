function pickingNumbers(a) {
    // Ordenamos la lista para facilitar la búsqueda de pares consecutivos
    a.sort((a, b) => a - b);
    
    // Inicializamos una variable para guardar el tamaño máximo de los subconjuntos
    let maxCount = 0;

    // Iteramos sobre la lista de números únicos
    for(let i = 0; i < a.length; i++) {
        // Contamos cuántas veces aparece el número actual y el siguiente (que difiere en 1)
        let count1 = a.filter(num => num === a[i]).length;
        let count2 = a.filter(num => num === a[i] + 1).length;

        // Comparamos el total de estos dos subconjuntos
        maxCount = Math.max(maxCount, count1 + count2);
    }

    // Retornamos el tamaño máximo encontrado
    return maxCount;
}