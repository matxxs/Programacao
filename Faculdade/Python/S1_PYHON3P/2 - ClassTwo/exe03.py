NotaOne = float(input('Digite a primeiro Nota do Aluno: '))
NotaTwo = float(input('Digite a segunda Nota do Aluno: '))

media = (NotaOne + NotaTwo) / 2


if  media == 10:
    print(f'Aprovado com Distinção | Nota: {media}')
elif media >= 7:
    print(f'Aluno aprovado | Nota: {media}')
else:
    print(f'Aluno reprovado | Nota: {media}')
