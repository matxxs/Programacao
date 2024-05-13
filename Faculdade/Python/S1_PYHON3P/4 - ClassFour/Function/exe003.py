import os
os.system('cls')

print('\n \033[1;32m CALCULAR LISTA \033[m')

def CalculateList(list):
    total = sum(list)
    average = total / len(list)
    return total, average

numbers = [10,30,50,6,2.5,100,20,70]
calculate  = CalculateList(numbers)

print(f'\n Total: {calculate[0]} \n Media: {calculate[1]}')