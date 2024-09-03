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

function getLetter(s) {
    let letter;
    // Write your code here
    const vowels = 'aeiou'
    const consonantFirst = 'bcdfg'
    const consonantSecond = 'hjklm'
    const consonantThird = 'npqrstvwxyz'

    switch(true){
        case vowels.includes(s[0]):
            letter = 'A'
            break;
        case consonantFirst.includes(s[0]):
            letter = 'B'
            break;
        case consonantSecond.includes(s[0]):
            letter = 'C'
            break;
        case consonantThird.includes(s[0]):
            letter = 'D'
            break;
    }
    return letter;
}


function main() {
    const s = readLine();
    
    console.log(getLetter(s));
}