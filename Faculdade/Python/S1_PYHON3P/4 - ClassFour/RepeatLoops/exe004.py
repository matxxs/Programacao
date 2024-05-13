note = float(input('\nDigite um nota de 0 a 10: '))

while note >= 10 or note < 0:
    print(f'Digite um nota valida')
    input('Digite uma nota: ')
    