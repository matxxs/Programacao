import os
os.system('cls')

print('\nCALCULE\n')

pTermo = int(input("Digite o primeiro termo: "))
qTermo = int(input("Digite a quantidade de termos: "))
rTermo = int(input("Digite a razão dos termos: "))

fTermo = pTermo + qTermo

calculo = pTermo
soma = 0

print()
print(pTermo)

for i in range(pTermo, fTermo) : 
    
    calculo = calculo + rTermo
    print(calculo)

    
    
