
let contador;
const carro = {modelo:"Marea", montadora:"Fiat", cor:"preto"};
const carros = ["Celta", "Monza", "Marea"];

console.log("Laços For");

//For 
for(let i = 0; i < 5; i ++){
  console.log("iteração " + i);
}

//For Of
for(let i of carros){
  console.log(i);
}

for(let i = 0; i < carros.length; i ++){
  console.log("iteração " + i, carros[i]);
}

//For In
for(let i in carro){
  console.log(i, carro[i]);
}

console.log("Laços While");

contador = 0;
let mentira = false;

while (contador < 5) {
  console.log("iteração " + contador);
  
  contador ++;
}

do {
  console.log("iteração \"Do While\"");
} while (mentira);


