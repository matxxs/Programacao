/*
    function nomeDaFuncao(){
        <bloco de execução>
    }

    nomeDaFuncao()
*/

function incentivarQuester(nomeQuester = 'Quester'){
    alert('Muito bem ' + nomeQuester + 'você chegou ao JS, continue assim!')
}

incentivarQuester('Roberto')

function soma(numero1, numero2){
    return numero1 + numero2
}

let resultadoSoma = soma(5, 6)
console.log(resultadoSoma)//4

resultadoSoma = soma(resultadoSoma, 10)
console.log(resultadoSoma)//14