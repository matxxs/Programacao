var salarioStatus = "mais ou menos";
if (salario >= 1000 && salario <= 2000) {
  salarioStatus = "mais ou menos";
}

var nome = "Matheus dos Santos Moura ";
var idade = 20;
var altura = 1.80;
var peso = 61;
var salario = 1400;
var profissao = "Aux. TI"

var temMaiorde18 = "Tem maior que 18";
if(idade >= 18&& idade <= 18){
    temMaiorde18 = "igual a 18 anos";
}

var imc = peso / (altura * altura);

var salarioStatus = "mais ou menos";
if (salario >= 1000 && salario <= 2000) {
  salarioStatus = "mais ou menos";
}
console.log("Nome: " + nome);
console.log("Idade: " + idade , temMaiorde18);
console.log("Altura: " + altura + " metros");
console.log("IMC: " + imc.toFixed(2));
console.log("Peso: " + peso + " kg");
console.log("Salário: R$ " + salario);
console.log("Salário status: " + salarioStatus);
console.log("Profissão: " + profissao);
