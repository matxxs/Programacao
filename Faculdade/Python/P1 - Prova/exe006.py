import os
os.system('cls')

def soma(numFat):     

    while True:

        calculate = 1

        for i in range(1, numFat + 1):

            calculate = calculate * i
        
        print(f'resultado: {calculate}')

        option = input("\nDigite SIM para sair:   ")
        
        if option.lower() == "sim":
            
            return 
        
        numFat = int(input('\nDigite um numero: '))
        
print('\nDIGITE UM NUMERO FATORIAL\n')

number = int(input('Digite um numero: '))
result = soma(number)




    