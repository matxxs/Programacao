print ('\nCALCULADORA \n')

n1 = float(input('Digite primeiro numero: '))
n2 = float(input('Digite segundo numero: '))

print('1 - soma')
print('2 - subtração')
print('3 - multiplicação')
print('4 - divisão')

choice = int(input('\nEscolha uma opção: '))

match choice:
    case 1:
        result = n1 + n2       
    case 2:
        result = n1 - n2
    case 3:
        result = n1 * n2
    case 4:
        result = n1 / n2
    case _:
        result = "Opção inválida"

print(f'Resultado {result}')