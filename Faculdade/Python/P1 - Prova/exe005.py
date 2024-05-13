import os
os.system('cls')

vot_canditado_1 = 0
vot_canditado_2 = 0
vot_nulo = 0
vot_branco = 0

while True:

    print("1. Candidato Antônio Maranhão")
    print("2. Cantidato Douglas Albuquerque")
    print("3. Nulo") 
    print("4. Branco")

    
    escolha = int(input("\nEscolha seu voto: "))

    match escolha:

            case 1:
                vot_canditado_1 = vot_canditado_1 + 1
                print(f'voto : 1. Candidato Antônio Maranhão')
                
            case 2:
                vot_canditado_2 = vot_canditado_2 + 1
                print(f'voto : 2. Cantidato Douglas Albuquerque')

            case 3:
                vot_nulo = vot_nulo + 1
                print(f'voto : 3. Nulo')

            case 4:
                vot_branco = vot_branco + 1
                print(f'voto : 4. Branco')

            case 5:
                print(f'Canditado 1. Candidato Antônio Maranhão: {vot_canditado_1}')
                print(f'Canditado 1. Candidato Antônio Maranhão: {vot_canditado_2}')
                print(f'Votos Nulos {vot_nulo}')
                print(f'Votos Branco: {vot_branco}')

                if vot_canditado_1 > vot_canditado_2:
                    print('\nCaditado Vencedor')
                    print('Candidato Antônio Maranhão')
                    break

                elif vot_canditado_2 > vot_canditado_1:
                    print('\nCaditado Vencedor')
                    print('Cantidato Douglas Albuquerque')
                    break
                

            case _:
                print('Opção invalida')
            
    print()
