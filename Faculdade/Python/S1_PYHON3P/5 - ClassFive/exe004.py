import os 
os.system('cls')


def maior_palavra(list):

    maior_len = ""
    for i in list:

        if len(i) > len(maior_len) :

            maior_len = i
            print(maior_len ,len(maior_len))
        
    return maior_len


listString = ['João', 'Maria', 'Kleber', 'Caio', 'Sarah']

print (maior_palavra(listString))

