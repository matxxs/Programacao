import os
os.system('cls')

print('DIGITE 0 PARA SAIR')


GetNumber = float(input('\nDigite um numero: '))

counter = 0
sun = GetNumber

while GetNumber > 0 :

    print()

    print(f'soma: {sun}')
    print(f'contador: {counter}')

    counter = counter + 1
    sun = sun + GetNumber
    average = sun / counter

    GetNumber = float(input('Digite um numero: '))
    


print(f'\nQuantidades de numeros digitados {counter}')      
print(f'A media dos numeros digitados {average} ')