
console.warn("Saída do tipo aviso");

let numA = 1, numB = 3, numC;


//Atribuições
numC = numA;
numA = 2;

console.log(numA, numB, numC);

numA ++;
numB += 10; //numB = numB + 10;
numC -= 1;

console.log(numA, numB, numC);

//Aritméticos

console.log(numA - 2);
console.log(numA);

console.log("soma", 2 + 2);
console.log("subtração", 5 - 3);
console.log("divisão", 10 / 2);
console.log("multiplicação", 4 * 2);
console.log("módulo ou resto", 5 % 3);
console.log("decremento", numB --);
console.log("exponenciação", 3 ** 2);

//Comparações

let um = 1, dois = 2, tres = 3;
let umS = "1", doisS = "2";
let doisa = 2.2, doisb = 2.26, doisc = 2.8;

console.log("igual", um == umS);
console.log("estritamente igual", um === umS);
console.log("estritamente diferente", um !== umS);
console.log("diferente", um != umS);

console.log("maior", doisb > 3);
console.log("menor", doisb < 3);

console.log("maior igual", doisc >= 2.79);
console.log("menor igual", doisc <= 3);
