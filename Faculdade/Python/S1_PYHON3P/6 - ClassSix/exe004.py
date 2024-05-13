import os
os.system('cls')

print('\nDIGITE SIM OU NAO\n')

perguntas = ["Telefonou para a vitima? ", "Esteve no local do crime? ", "Mora perto da vitima? ",
            "Devia para a vitima? ", "Ja trabalhou com a vitima? "]

contador = 0

for i in perguntas:
    
    resposta = input(i)

    if resposta.lower() == "sim":

        contador = contador + 1

match contador:

    case 5:
        print('\nAssassino')      
    case 3:
        print('\nCumplice')    
    case 2:
       print('\nSUS')      
    case _:
        print('\nInocente')