import os
import datetime
import time
import keyboard

def clear_screen():
    """Limpa a tela do terminal."""
    os.system('cls' if os.name == 'nt' else 'clear')

def Clock(): 

    while True:

        if  keyboard.is_pressed('enter'):
            currentDate = datetime.datetime.now()

            date_formart = currentDate.strftime("%d/%m/%Y %H:%M:%S")
            hours_formart = currentDate.strftime("%H:%M:%S")

            return date_formart, hours_formart

        currentDate = datetime.datetime.now()

        print(f'\r\033[1;35mHora atual\033[m: {currentDate.strftime("%H:%M:%S")}', end='', flush=True)

        time.sleep(0.1)


def CompanyInfo(entryTime, nameUser):

    time.sleep(1)
    print('\nAguarde...'.upper())
    time.sleep(2)
    print('Gerando comprovante'.upper())

    time.sleep(3)
    print(f"""\n
          Comprovante de registro do Trabalho
          CNPJ90861959000104  {datetime.datetime.strptime(entryTime[0] ,"%d/%m/%Y %H:%M:%S")}
          Nextronics Rua SC 4 Setor Goiânia 2
          {nameUser}-token
        """.upper())


def ArrivalTime(entryTime, nameUser): 

    hourEntryTime = datetime.datetime.strptime(entryTime[1] ,"%H:%M:%S").time()

    if hourEntryTime > datetime.time(6, 0) and hourEntryTime < datetime.time(12, 0):
        print(f' Bom dia {nameUser}'.upper())
        CompanyInfo(entryTime, nameUser)

    elif hourEntryTime >= datetime.time(12, 0) and hourEntryTime < datetime.time(19, 0):
        print(f' Boa Tarde {nameUser}'.upper())
        CompanyInfo(entryTime, nameUser)

    else : 
        print(f' Boa Noite {nameUser} \n')
        CompanyInfo(entryTime, nameUser)


def main():

    clear_screen()
    print('\n \033[1;32mBATER O PONTO\033[m\n')

    nameUser = input('Informe seu nome: ')
    print(f'{nameUser} precione enter para bater o ponto\n')

    entryTime = Clock()

    registeredUsers =  ['Matheus','João', 'Maria', 'Kleber', 'Caio', 'Sarah']

    #for checkUser in range(len(registeredUsers)):
    for checkUser in registeredUsers:

        if checkUser.upper() == nameUser.upper():
            ArrivalTime(entryTime, nameUser)
            break
        
    else:
        clear_screen()
        print('\n\n \033[1;31mError: Usuario não encontrado\033[m')
        time.sleep(3)
        main()
    
main()
           