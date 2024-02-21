#   Exercicio 1

#   Exercicio 2

name = input('Qual seu nome: ')
age = input('Digite sua idade: ')
course = input('Curso: ')

print(name, 'seja bem vinda ao curso de ', course, '.Em nosso sistema consta que você possui ', age, 'anos')

#   Exercicio 3

weight = float(input('Informe seu peso: '))

print(type(name))
print(type(age))
print(type(weight))

#   Exercicio 4

n1 = int(input('Primeiro um numero: '))
n2 = int(input('Segundo um numero: '))

some = n1 + n2
print('Soma do Primeiro e Segundo numero: ',some)

#   Exercicio 5

numInt = int(input('Digite um numero intiero : '))
numDecimal = float(input('Digite um numero Decimal : '))

subIntEDecimal = numInt - numDecimal 

print('Subração de um interio e um Dicimal : ',subIntEDecimal)

#   Exercicio 6

notaPrimeiroBimestre = float(input('Nota do primeiro bimestre: '))
notaSegundooBimestre = float(input('Nota do segundo bimestre: '))
notaTerceiroBimestre = float(input('Nota do terciero bimestre: '))
notaQuartoBimestre = float(input('Nota do quarto bimestre: '))

media  = (notaPrimeiroBimestre + notaSegundooBimestre + notaTerceiroBimestre + notaQuartoBimestre) / 4 

print('Media do aluno : ', media)

#   Exercicio 7

valorMetro =  float(input('Digite o metro: '))

mt = valorMetro * 100

print('O metro: ', mt, 'mt')


