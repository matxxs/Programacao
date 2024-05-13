import os
os.system('cls')

list = [1, 2 , 3, 4, 5, 6, 7, 8, 9, 10]

def CalculateImpares(list):
    
    for i in list:
        
        if i % 2 != 0:
            print(f'Impar: {i}')

result = CalculateImpares(list)

print(result)