print("Ola Mundo")

nome = "Joao"
idade = 20

# print("Ola", nome, "voce tem", idade, "anos")

print(f"Ola {nome} voce tem {idade} anos e nasceu em {2025 - idade}")

estado = True
estado = False

nome = 12

print(nome)

print("inicio do if")

if idade >= 18:
    print("Maior de idade")
    # print("Maior de idade2") -> um espaço antes gera um erro de sintax

elif idade < 18:
    print("Menor de idade")

else:
    print("Nao sei a idade")

print("Fim do if")
print("--"*20)

print("match")
idade = 18
match idade:
    case 18:
        print("Maior de idade")
    case 17:
        print("so falta 1 ano")
    case 15:
        print("so falta 3 anos")
    case _:
        print("Nao sei a idade")

print("fim match")

print("--"*20)
print("ler dados")

nome = input("Digite seu nome: ")
idade = int(input("Digite sua idade: "))

print(f"Ola {nome} voce tem {idade} anos e nasceu em {2025 - idade}")


print("--"*20)
print("Loops")

#range
r = range(10) # 0, 1, 2, 3, 4, 5, 6, 7, 8, 9
r = range(1, 10) # 1, 2, 3, 4, 5, 6, 7, 8, 9
r = range(1, 10, 2) # 1, 3, 5, 7, 9

# range(lb, ub, step) -> lb -> lower bound, ub -> upper bound, step -> passo -> vai de lb ate ub - 1 com passo step

r = range(1, 11, 2) # 1, 3, 5, 7, 9

#for

#for(int i = 0; i < 10; i++)

for i in range(10):
    print(i, end=" ")

print("\n\n")

for i in range(0, 10, 2):
    print(i, end=" ")

print("\n\n")

for i in range(0, 50, 1):

    if i == 30:
        break

    if i % 2 == 0:
        continue

    print(i, end=" ")


print("\nFim do loop")

print("\n\n")
#while - do




print("\nFim do programa")