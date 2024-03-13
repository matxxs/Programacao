import os
os.system('cls')

print('\n TAXA DE IMPOSTO')

print('\nNesta aplicação o imposto não pode ser maior que 20%\n')

def SunTax(rateTax, cost):
    return (rateTax / 100) * cost

rateTax = float(input('Informe a taxa de imposto:  '))

while rateTax > 20:
    print('\n \033[1;31m ERRO: informe uma taxa valida \033[m ')
    rateTax = float(input('\nInforme a taxa de imposto:  '))
    
cost = float(input('Informe o valor do item: '))

getTax = SunTax(rateTax, cost)
pay = int(cost + getTax)

print(f'\nValor a ser pago: {pay}')