# listas (Arrays)


nomes = ["nome 1", "nome 2"] # em c -> int notas[2][10] = {"nome 1", "nome 2"}

notas = [12,15,17,10] # em c -> int notas[4] = {12,12,17,10}

print(notas)

print(notas[1])

notas[1] = 20

print(notas[1])

notas.append(19) # add um novo elm no final

print(notas)


print(notas.__len__())  # num de elm
print(len(notas))       # num de elm


notas.append(20)
print(notas)

notas.insert(3, 7) # [12, 20, 17, 7 ,10, 19,20] # add na pos
print(notas)

nomes = ["Rita", "Maria", "Joana", "Rui", "Rita"]


print("-------------")
print(nomes)

print(nomes.remove("Rita")) # remove 1 ocur

print(nomes)


print(nomes.pop())# remove ultimo e devolve val

print(nomes)


nomes = [
    "Ana", "Bruno", "Carla", "Daniel", "Eduarda", "Fábio", "Gabriela", "Henrique", "Inês", "João",
    "Kátia", "Luís", "Marta", "Nuno", "Olga", "Paulo", "Rita", "Sérgio", "Teresa", "Vasco"
]

print(nomes.pop(1))

print(nomes)

nomes.clear() # limpa a lista
print(nomes)


nomes = [
    "Ana", "Bruno", "Carla", "Daniel","Bruno","Eduarda", "Fábio", "Gabriela", "Henrique", "Inês", "João",
    "Kátia", "Luís", "Marta", "Nuno", "Olga", "Paulo","Bruno", "Rita", "Sérgio", "Teresa","Bruno", "Vasco"
]


print(nomes.count("Bruno"))

print(nomes[0])

del nomes[0]

print(nomes[0])

print("--------" * 5)

# print(nomes[50]) # se o index nao existir -> IndexError: list index out of range




print("----" * 5, "nomes2 = nomes" ,"----" * 5)
nomes2 = nomes

print(nomes2[0])
print(nomes[0])

nomes2[0] = "Ivo"

print(nomes2[0])
print(nomes[0])


print("----" * 5, "nomesC = nomes.copy()" ,"----" * 5)
nomesC = nomes.copy()

print(nomesC[0])
print(nomes[0])

nomesC[0] = "Carla"

print(nomesC[0])
print(nomes[0])


# for ?
print("----for nome in nomes:----")
print("--------")
lista_nomes = [
    "Ana", "Bruno", "Carla", "Daniel","Bruno","Eduarda", "Fábio", "Gabriela", "Henrique", "Inês", "João",
    "Kátia", "Luís", "Marta", "Nuno", "Olga", "Paulo","Bruno", "Rita", "Sérgio", "Teresa","Bruno", "Vasco"
]

for nome in lista_nomes:
    print(nome)

for nome in lista_nomes:
    for letra in nome:
        print(letra)



print("----for letra in nome:----")

for letra in "abcd": # for letra in ['a', 'b', 'c', 'd']:
    print(letra)


print("--------")

for i in range(nomes.__len__()):
    print(i, nomes[i])

print("--------")
print("--------")

for i, nome in enumerate(nomes): # opt nao tem de utlizar
    print(i, nome)


"""
1 - crie um programa que receba 5 notas, coloque as notas numa lista e calcule a media do elementos na lista 

2 - crie um programa que receba notas, ate o utilizador inserir 0. 
    coloque as notas numa lista e calcule  a media do elementos na lista 

vao utilizar:
- input
- listas
- for
- funcs 

"""

# 1 - crie um programa que receba 5 notas, coloque as notas numa lista e calcule a media do elementos na lista

def soma(lista):
    s = 0
    for elm in lista:
        s += elm

    return s

def media(lista) -> float:
   return soma(lista) / lista.__len__()

"""
lista_notas = []

for i in range(5):
    nota = float(input(f"Informe nota #{i + 1}: "))
    lista_notas.append(nota)

avg = media(lista_notas)
print(f"a media das notas é: {avg}")
"""

"""
crie um programa que receba notas, ate o utilizador inserir 0. 
    coloque as notas numa lista e calcule  a media do elementos na lista 
    
"""

def nota_valida(nota:float, min:int = 0, max:int = 20) -> bool:
    if min <= nota <= max:
        return True

    return False

lista_notas = []
#contador = 1
while True:
    nota = input(f"Informe nota #{lista_notas.__len__() + 1}: ")

    if nota == '0':
        break

    # validar input
    if not nota.isnumeric():
        print("nao e um numero")
        continue

    nota = float(nota)

    ## validar a nota 0-20
    if not nota_valida(nota):
        print("a nota nao e valida")
        continue


    lista_notas.append(nota)
    #contador += 1


avg = media(lista_notas)
print(f"a media das notas é: {avg}")