'use strict';

process.stdin.resume();
process.stdin.setEncoding('utf-8');

let inputString = '';
let currentLine = 0;

process.stdin.on('data', inputStdin => {
    inputString += inputStdin;
});

process.stdin.on('end', _ => {
    inputString = inputString.trim().split('\n').map(string => {
        return string.trim();
    });
    
    main();    
});

function readLine() {
    return inputString[currentLine++];
}

/*
 * Complete the vowelsAndConsonants function.
 * Print your output using 'console.log()'.
 */
function vowelsAndConsonants(s) {
    let vowelsArr = []
    let consonantsArr = []
    
    let vowels = 'aeiou'
    
    for(let letter of s){
        if(vowels.includes(letter)) vowelsArr.push(letter)
        else consonantsArr.push(letter)
    }
    
    vowelsArr.forEach(vow => console.log(vow))
    consonantsArr.forEach(conso => console.log(conso))
}


function main() {
    const s = readLine();
    
    vowelsAndConsonants(s);
}