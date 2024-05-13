import os
os.system('cls')

horaUsuario = float(input("Informe valor da sua hora: "))
quantidadeHora = float(input("Qual foi sua quantidade horas trabalhadas: "))

salarioBruto  = horaUsuario * quantidadeHora


if salarioBruto <= 2640:
    procetagem = 0
    print()
    print("Isento")

elif salarioBruto > 2640 and salarioBruto <= 2828:
    procetagem = 0.075
    desconto = salarioBruto * procetagem

elif salarioBruto > 2828 and salarioBruto <= 3751:
    procetagem = 0.15
    desconto = salarioBruto * procetagem

elif salarioBruto > 3751 and salarioBruto <= 4664.99:
    procetagem = 0.225
    desconto = salarioBruto * procetagem

else :
    procetagem = 0.275
    desconto = salarioBruto * procetagem


fgts = salarioBruto * 0.11
sindicato = salarioBruto * 0.03

print()

print(f'Salario do Colaborador: {salarioBruto}')
print(f'Desconto aplicado: {procetagem}')
print(f'FGTS: {fgts}')
print(f'Sindicato: {sindicato}')


