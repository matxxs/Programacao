print('\nFOLHA DE PAGAMENTO / CALCULO \n')

grossSalary = float(input('Informe o salario bruto: '))

if grossSalary <= 900:
    print('Isento')
elif grossSalary <= 1500:
    incomeTax = grossSalary * 0.05
elif grossSalary <= 2500:
    incomeTax = grossSalary * 0.1
else:
    incomeTax =  grossSalary * 0.2

inss = grossSalary * 0.10
fgts = grossSalary * 0.11
totalTax = incomeTax + inss 
netSalary = grossSalary - totalTax

print(f'\nDesconto do Imposto de Renda: R$ {incomeTax}')
print(f'INSS deconto: R$ {inss}')
print(f'FGTS depositado pela empresa: R${fgts}')
print(f'Total de descontos: R${totalTax}')
print(f'Salário líquido a receber: R${netSalary}')
