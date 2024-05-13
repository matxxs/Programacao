import os
os.system('cls')

print('\n \033[1;32m  TAXA DE IMPOSTO \033[m')

print('\nNesta aplicação o imposto não pode ser maior que 20%\n')

def SunTax(rateTax, cost):
    return (rateTax / 100) * cost

cost = float(input('Informe o valor do produto: '))
rateTax = float(input('Informe a taxa de imposto:  '))

while rateTax > 20:
    print('\n \033[1;31m ERRO: informe uma taxa valida \033[m ')
    rateTax = float(input('\nInforme a taxa de imposto:  '))
    
getTax = SunTax(rateTax, cost)
pay = int(cost + getTax)

print(f'\nValor a ser pago: {pay}')