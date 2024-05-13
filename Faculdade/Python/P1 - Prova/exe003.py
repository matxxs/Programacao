import os
os.system('cls')



def contador_vogais(list_vogais):
    
    vogais = "aeiouAEIOU"
    contador = 0
    indice = 0

    while  indice < len(list_vogais):

        if list_vogais[indice] in vogais:
            contador = contador + 1
        
        indice = indice + 1

    return contador
   
descricao = input("Escreva uma palavra: ")

result = (contador_vogais(descricao))

print(f'\nO numero de vogais nas string e: {result}')