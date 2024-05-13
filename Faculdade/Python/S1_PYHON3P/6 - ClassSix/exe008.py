import os
os.system('cls')

Candidate = ["1. Candidato Jair Rodrigues", "2. Candidato Carlos Luz", "3. Candidato Neves Rocha",
             "4. Nulo", "5. Branco"
             ]

print('\nurna eletrônica\n'.upper())

counter = 0

for i in range(5):

    while counter == i:

        print(Candidate[i]) 

        counter = counter + 1

    if counter == 5:
        choice =  int(input("\nEntre com o seu voto: "))

        print()

        match choice:

            case 1:
                print(f'voto {Candidate[choice - 1]}')

            case 2:
                print(f'voto {Candidate[choice - 1]}')

            case 3:
                print(f'voto {Candidate[choice - 1]}')

            case 4:
                print(f'voto {Candidate[choice - 1]}')

            case 5:
                print(f'voto {Candidate[choice - 1]}')

            case _:
                print('Opção invalida')