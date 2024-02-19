let frutas = ['banana', 'maça', 'laranja', 'pêra']
let frutasTamanaho = frutas.length

// for (let i = 0; i < frutasTamanaho; ii++){
//    console.log('Fruta: ' + frutas[i])
// }


// frutas.forEach(function(item, indice, array){
//    console.log(array)
//    console.log(indice)
//    console.log('Fruta: ' + item)
// })

frutas.push('manga') // Acrescentar no final do array um novo elemento 

console.log(frutas)

frutas.pop() // Tirar o ultimo elemento do array

console.log(frutas)

frutas.shift() // Removo o primeiro elemento do array

console.log(frutas)

frutas.unshift('morango') // Adicionar um novo elemento no inicio do array

console.log(frutas)

let posicaoLaranja = frutas.indexOf('laranja'); // Pegar o posição do elemento no array

console.log('posicao do Laranja    ' + posicaoLaranja)





