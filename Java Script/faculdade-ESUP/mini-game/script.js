const bntComecaJogo = document.getElementById('bntComecaJogo');
const formulario = document.getElementsByName('tentativa');

console.log()

entrada[0].hidden = true;

let numeroAleatorio;

bntComecaJogo.addEventListener ("click", function(){

    numeroAleatorio = sorteAleatorio;

    entrada.hidden = false;
});

entrada.addEventListener("blur", function(){
    
    let  palpite  = entrada.value;

    if (palpite == numeroAleatorio){
        alert('Acertoou');
    } else {
        alert('Errooooor');
    }

    entrada.value = "";
    entrada. hidden = true;
});

function sorteAleatorio (){
    return Math.floor(Math.random() * 10) + 1
;}