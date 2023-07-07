
console.log("Esta é uma saída do JS");

//Variáveis declaradas com VAR
var exemplo;
var _exemplo;
var $exemplo;
var eXem_plo;

//Variáveis declaradas com LET
let x = -1;
let y = 0;

//Constante
const hoje = 10;

console.log("Saída da variável x", x);

y = x;

console.log(x);

console.log(hoje);

/*
Cometário de muitas linhas

A atribuição de outro valor para uma constante provoca um erro
O valor das constantes não muda
hoje = 15;
*/

//Exemplo de bloco
{
    let variavel_de_bloco = "Bloco";
    console.log(variavel_de_bloco);
}

//Isto é uma função
function inicio() {
    let variavel_da_funcao = "Função";
    console.log(variavel_da_funcao);
}

inicio();

//A variável de bloco ou função não existe aqui
//console.log(variavel_de_bloco);
//console.log(variavel_da_funcao);

//Tipos de Dados

// Numéricos:
let altura = 180;
let peso = 84.5;

// Strings:
let cor = 'vermelho';
let ultimoNome = "Silva";

// Booleanos
let noite = true;
let dia = false;

// Objeto:
const carro = {modelo:"Marea", montadora:"Fiat"};

// Array:
const carros = ["Celta", "Monza", "Marea"];

// Objeto Data:
const date = new Date("2023-05-10");

// Big Ints
let numeroGrandao = BigInt("123456789012345678901234567890");

// Notações científicas
let a = 123e5;    // 123 * 10 ^ 5 = 12300000
let b = 123e-5;   // 123 * 10 ^ -5 = 0.00123

// Operador typeof
//Localiza o tipo de variável  
console.log(typeof cor);
console.log(typeof peso);
console.log(typeof numeroGrandao);

// Nulos e indefinidos
let vazio = ""; //Tipo string
let nulo = null; //Tipo Nulo
let semDefinicao = undefined; //Sem um tipo


peso = null;
console.log(typeof peso); //O tipo de dado permanece mesmo nulo

peso = undefined;
console.log(typeof peso); //O tipo de dado aparece sem definição

