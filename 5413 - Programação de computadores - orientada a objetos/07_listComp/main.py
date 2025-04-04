nomes = [
    "Ana", "Bruno", "Carla", "Daniel", "Eduarda", "Fábio", "Gabriela", "Henrique", "Inês", "João",
    "Kátia", "Luís", "Marta", "Nuno", "Olga", "Paulo", "Rita", "Sérgio", "Teresa", "Vasco",
    "Alice", "Bernardo", "Cláudia", "Duarte", "Eva", "Fernando", "Gonçalo", "Helena", "Isabel", "Jorge",
    "Kelly", "Leonardo", "Mariana", "Nelson", "Otávio", "Patrícia", "Raquel", "Samuel", "Tatiana", "Ulisses",
    "Vanessa", "Wilson", "Xavier", "Yara", "Zé", "Adriana", "Baltasar", "Cristina", "Domingos", "Emanuel"
]

print(nomes.__len__())

# list slicing
print(nomes[0])

print(nomes[0:10])

print(nomes[:10])

print(nomes[5:10])

print(nomes[0:10: 5])


print(nomes[-5: -1])

print(nomes[::-1])

# list comp
print("------" * 10)

# nova_lista = [exp for elm in lista]


nova_lista = [(n, len(n)) for n in nomes if n.endswith('l')]
print(nova_lista)


# Crie um programa que separa os nomes da lista com base na sua 1 letra

# vao usar:

# for
# listas
# list comp


lista_Letras = ["A", "B", "C"] # ....