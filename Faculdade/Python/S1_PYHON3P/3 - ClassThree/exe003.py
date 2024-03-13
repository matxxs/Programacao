nameUser = input('\n Me informe seu nome: ')

print('\nVamos precisar de algumas informções para aprovação do emprestimo\n')

print(f'{nameUser} preencha as seguintes informações: ')
partmentValue = float(input(f'valor do apartamento: '))
salary = float(input('Salario atual: '))
installments = float(input('Quantidade de parcelas: '))
monthlyInstallment = partmentValue / installments
print(f'Valor da Parcelas: {monthlyInstallment} ')

if(salary * 0.4 <= monthlyInstallment):
    print('\nPrestção mensal Superior ao salario')
else:
    print('\n Emprestimo aceito')
