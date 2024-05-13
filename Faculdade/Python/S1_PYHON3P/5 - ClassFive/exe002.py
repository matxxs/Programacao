import os 
os.system('cls')


fib1 = 1
fib2 = 1

print(fib1)
print(fib2)


for i in range(1, 11):
    fib = fib1 + fib2
    fib1 = fib2
    fib2 = fib
    print(fib)
    
    
    