#   Exercicio 1

numberMin = 0
numberMax = 100

numberUser = int(input('Digite um numero entre 0 e 100: '))

if numberUser >= numberMin and numberUser <= numberMax :
    print(f'Parabéns seu numero e: {numberUser}' )

else:
    print('O numero que você digitou, não se encontra em 0 e 100. ' )
    print(f'Numero digitado:  {numberUser}' )

