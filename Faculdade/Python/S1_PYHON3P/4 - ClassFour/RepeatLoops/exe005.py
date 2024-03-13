print()

username = input('informe seu nome: ')
password = input('informe sua senha: ')

while username == password:
    print('A senha não pode ser igual a nome do usuario')
    password = input('\nInforme uma nova senha: ')