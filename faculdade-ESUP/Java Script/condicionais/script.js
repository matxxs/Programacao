
let um = 1, dois = 2, tres = 3;
let umS = "1", doisS = "2", day;
let doisa = 2.2, doisb = 2.26, doisc = 2.8;

let verdade = true, mentira = false;

console.log("Condicionais");

//Condição IF - SE

if (umS == 1) {
    console.log("Condição verdadeira");
} else {
    console.log("Condição falsa");
}


if (umS == 1) {
    console.log("Condição verdadeira");
} else if (umS == 2) {
    console.log("Condição verdadeira alternativa");
} else {
    console.log("Condição falsa");
}


// Escolha
switch (new Date().getDay()) {
    case 0:
      day = "Domingo";
      break;
    case 1:
      day = "Segunda";
      break;
    case 2:
       day = "Terça";
      break;
    case 3:
      day = "Quarta";
      break;
    case 4:
      day = "Quinta";
      break;
    case 5:
      day = "Sexta";
      break;
    case 6:
      day = "Sábado";
  }

  console.log(day);

// Operadores lógicos

console.log("E/AND", verdade && verdade);
console.log("E", verdade && mentira);
console.log("OU/OR", verdade || mentira);
console.log("OU/OR", mentira || mentira);
console.log("NOT", !verdade);
console.log("NOT", !mentira);


