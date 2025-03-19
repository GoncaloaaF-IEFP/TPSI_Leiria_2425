
print(" 1 Faça uma função  que mostre a mensagem \"ola mundo\" na tela.") #-> char de escape -> o que vem depois e considerado txt

def ex1():
    print("Ola Mundo")

ex1()

print(" 2 Faça uma função que peça um número e então mostre a mensagem O número informado foi [número].")


def ex2(num):
    print(f"o numero informado foi {num}")

num = input("Digite um numero: ")
ex2(num)


def ex2_v2():
    num = input("Digite um numero: ")
    print(f"o numero informado foi {num}")

ex2_v2()

print("3 Faça uma função  que peça dois números e imprima a soma.")

def ex3(num1:int , num2:int):
    soma = num1 + num2
    print(f"A soma dos dois numeros: {soma}")

num1 = int(input("Digite um numero: "))
num2 = int(input("Digite outro numero: "))

ex3(num1, num2)


print(" 4 Faça uma função  que peça as 4 notas bimestrais e mostre a média.")

def ex4(nota1, nota2, nota3, nota4):
    media = (nota1 + nota2 + nota3 + nota4) / 4
    print(f"a meida das notas é: {media}")



def ex4_v2():
    total = 0.0
    for i in range(4):
        nota = float(input(f"Digite a nota {i+1}: "))
        total += nota

    media = total / 4

    print(f"a meida das notas é: {media}")



nota1 = float(input("Digite sua primeira nota: "))
nota2 = float(input("Digite sua segunda nota: "))
nota3 = float(input("Digite sua terceira nota: "))
nota4 = float(input("Digite sua quarta nota: "))

print("notas v1")
ex4(nota1, nota2, nota3, nota4)

print("notas v2")
ex4_v2()

print("4.2 Faça uma função  que peça as N notas bimestrais e mostre a média. o N é indicado pelo utilzador ")


def ex4_2(num_notas:int):
    total = 0.0
    for i in range(num_notas):
        nota = float(input(f"Digite a nota {i + 1}: "))
        total += nota

    media = total / num_notas

    print(f"a meida das notas é: {media}")

n = int(input("Quantas notas quer ler: "))

ex4_2(n)


# 5 Faça uma função que converta metros para centímetros.

# 1m = 100cm
def ex5(m:float):
    cm = m * 100
    print(f"{m}m = {cm}cm")

ex5(1.5)



# tendo como base o ex da media valide o input do utilizador, deve assumir que o utilizador vai sempre dar como input valores numericos.
# uma nota e valida se estiver entre 0 e 20
print("Ex validar")
def ex4_2(num_notas:int):
    total = 0.0
    notas_lidas = 0
    while notas_lidas < num_notas:
        nota = float(input(f"Digite a nota {notas_lidas}: "))
        total += nota

    media = total / 4

