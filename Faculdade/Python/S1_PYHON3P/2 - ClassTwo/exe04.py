salaryCollaborator = float(input('\n Informe seu salario atual: '))

print(f'\nSALARIO ANTERIOR: {salaryCollaborator}')

if salaryCollaborator <= 280:
    percentage = 0.20
    readjustment = salaryCollaborator * percentage
     
elif salaryCollaborator > 280 and salaryCollaborator < 700:
    percentage = 0.15
    readjustment = salaryCollaborator * percentage

elif salaryCollaborator >= 700 and salaryCollaborator < 1500:
    percentage = 0.10
    readjustment = salaryCollaborator *  percentage

else :
    percentage = 0.05
    readjustment = salaryCollaborator * percentage

readjustmentPercentage = int(percentage * 100)
salaryCurrent = salaryCollaborator + readjustment

print(f'Porcetagem usada: {readjustmentPercentage}%')
print(f'Reajuste: {readjustment}')
print(f'Salario Atual: {salaryCurrent}')