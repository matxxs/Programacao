print('\nCONVERSOR DE TEMPERATURA\n')

toConvert = float(input("Digite um numero: "))

print('\nA - Converter de Celsius para Fahrenheit')
print('B - Fahrenheit para Celsius')

user = input('\nEscolha um opção: ')

if(user.upper() == "A"):
    Fah = (9 * toConvert) / 5  + 32
    print(f'resultado: {Fah} graus Fahrenheit ')
elif(user.upper() == "B"):
    Cel = ( 5 * (toConvert  - 32) ) / 9
    print(f'resultado {Cel} graus Celsius')
else :
    print('Opção invalida')