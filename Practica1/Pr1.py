import random

num = int(input("Ingrese la cantidad de numeros a ordenar (entre 1 hasta 10000): "))
numeros = []

if 1 <= num <= 10000:
    for n in range(num):
        numeros.append(random.randrange(1, 10000))

    print(numeros)

    numeros.sort()

    print(numeros)

else:
    print("De be ser una cantidad entre 1 y 10000.")
