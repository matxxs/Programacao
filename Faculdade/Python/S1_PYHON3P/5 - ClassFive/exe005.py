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
   
text  = 'O 3 periodo de Sistema de informações está aprendendo Python'

result = (contador_vogais(text))

print(f'O numero de vogais nas string e: {result}')