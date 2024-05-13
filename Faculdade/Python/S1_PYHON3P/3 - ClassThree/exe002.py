print('\nCALCULO DE SEGUNDOS\n')

seconds = float(input("Segundos: "))
minutes = float(input("Minutos: "))
hours = float(input("Horas: "))
days = float(input("Dias: "))

totalSeconds = seconds + (minutes * 60) + (hours * 3600) + (days * 86400) 

print(f'\nA soma de todos os segundos {totalSeconds}s')
