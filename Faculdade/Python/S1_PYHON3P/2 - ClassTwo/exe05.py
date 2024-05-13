sideOne = float(input('Informe o primero Lado: '))
sideTwo = float(input('Informe o segundo Lado: '))
sideThree = float(input('Informe o terceiro Lado: '))

if sideOne == sideTwo == sideThree:
    print('Triangulo Equilatero') 

elif sideOne != sideTwo or sideTwo != sideThree:
    print('Trinagulo Isoceles')
else:
    print('Triagulo Escaleno')