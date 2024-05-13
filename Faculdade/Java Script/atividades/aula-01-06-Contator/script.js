const formulario = document.getElementsByTagName("form")[0];
const numeroInicial = document.getElementById("ninicial");
const numeroFinal = document.getElementById("nfinal");
const btnContador = document.getElementById('btnContador');

formulario.addEventListener("submit", function (event) {
    event.preventDefault();

});

btnContador.addEventListener('click', function () {

    //Dar valor ao input
    const numeroInicialValue = parseInt(numeroInicial.value);
    const numeroFinalValue = parseInt(numeroFinal.value);

    //Pegar valores das funções
    const [contagemImapres,ResultadoImpares, ListaNumeros] = numerosImpares(numeroInicialValue, numeroFinalValue);
    const [contagemPares,ResultadoPares, ListaPares] = numerosPares(numeroInicialValue, numeroFinalValue);
    const [contagemPrimos,ResultadoPrimos, ListaPrimos] = exibirNumerosPrimos(numeroInicialValue, numeroFinalValue);

    // Exibir valores ao HTML

    //Valores Impares
    document.getElementById("resultadoImpares").innerHTML = ("<b> A quantidade de numeros entre os intervalos = </b>" + contagemImapres +"</br><b>A Soma dos Numeros Impares = </b>" + ResultadoImpares + "</br> <b>Sequência de números ímpares =</b> " + ListaNumeros);

    // valores Pares
    document.getElementById("resultadoPares").innerHTML = ("<b> A quantidade de numeros entre os intervalos = </b>" + contagemPares +"</br><b>Soma dos Numeros Pares =</b> " + ResultadoPares + "</br> <b>Sequência de números pares =</b> " + ListaPares);

    //Valore Primos 
    document.getElementById("resultadoPrimos").innerHTML = ("<b> A quantidade de numeros entre os intervalos = </b>" + contagemPrimos + "</br><b>Soma dos Numeros Primos =</b> " + ResultadoPrimos + "</br> <b>Sequência de números primos =</b> " + ListaPrimos);
});


function numerosImpares(numeroInicial, numeroFinal) {
    var contagemImapres = 0
    var ResultadoImpares = 0
    var ListaImpares = ""

    for (numeroInicial; numeroInicial <= numeroFinal; numeroInicial++) {
        if (numeroInicial % 2 === 1) {
            ResultadoImpares += numeroInicial
            contagemImapres += 1;
        }

        if (numeroInicial == 1) {

            if (numeroInicial % 2 === 1) {
                ListaImpares += numeroInicial.toString();
            }
        } else if (numeroInicial % 2 === 1) {

            ListaImpares += ", " + numeroInicial.toString();
        }
    }
    return [contagemImapres,ResultadoImpares, ListaImpares]
}

function numerosPares(numeroInicial, numeroFinal) {
    var contagemPares = 0
    var ResultadoPares = 0
    var ListaPares = ""

    for (numeroInicial; numeroInicial <= numeroFinal; numeroInicial++) {
        if (numeroInicial % 2 === 0) {
            ResultadoPares += numeroInicial
            contagemPares += 1;
        }
        if (numeroInicial == 2) {

            if (numeroInicial % 2 === 0) {
                ListaPares += numeroInicial
            }
        } else if (numeroInicial % 2 === 0) {

            ListaPares += ", " + numeroInicial
        }
    }

    return [contagemPares ,ResultadoPares, ListaPares]
}

function exibirNumerosPrimos(numeroInicial, numeroFinal) {
    var contagemPrimos = 0
    var ResultadoPrimos = 0
    var ListaPrimos = ""

    for (numeroInicial; numeroInicial <= numeroFinal; numeroInicial++) {

        if (numeroInicial != 1 && numeroInicial != 0) {

            if (numerosPrimos(numeroInicial)) {
                ResultadoPrimos += numeroInicial;
                contagemPrimos += 1;
            }
            if(numeroInicial == 2 ) {
                if (numerosPrimos(numeroInicial)) {
                    ListaPrimos +=  numeroInicial;
                }
            }
            else if (numerosPrimos(numeroInicial)) {
                ListaPrimos += ", " + numeroInicial;
            }
        }

    }

    return [contagemPrimos,ResultadoPrimos, ListaPrimos]
}

function numerosPrimos(num) {

    for (let divisor = 2; divisor < num; divisor++) {
        if (num % divisor === 0) {
            return false;
        }
    }
    return true;
}
