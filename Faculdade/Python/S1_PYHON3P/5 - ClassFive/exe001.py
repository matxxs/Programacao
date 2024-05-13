import os 
os.system('cls')

namesUser = ['João', 'Maria', 'Kleber', 'Caio', 'Sarah']

valueReal = [1350.20, 30.00, 830.15, 50.00] 

print('\nLISTA DE CLIENTES - BANCO NASCIONAL\n')


print ('Nome   Saldo')

for i in range(5):
    print(f'{namesUser[i]} R$ {valueReal[i]}')
    break

    