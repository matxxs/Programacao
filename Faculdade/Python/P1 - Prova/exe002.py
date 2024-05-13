import os 
os.system('cls')

def soma_pares(list):

    soma = 0
    for num in list : 
       
        if num % 2 == 0:
            print(f'Numeros Pares: {num}') 
            soma = soma + num
        
    return soma
            
list = [1, 2, 3, 4, 6, 7, 8, 9, 10, 11, 12]         

print(f'\n A soma dos números pares na Lista é: {soma_pares(list)}')
