
def a_melhor_func_do_mundo():
    print("Olá, meu nome é Python")

a_melhor_func_do_mundo()

def ola_mundo(nome: str,ano: int = 2021):
    print(f"Olá, meu nome é {nome}, e estamos em {ano}")

ola_mundo("Gonçalo")
ola_mundo("Gonçalo", 2025)



def ola_mundo_r(nome: str,ano: int = 2021):
    return  f"Olá, meu nome é {nome}, e estamos em {ano}"


resp = ola_mundo_r("Gonçalo", 2025)

print(resp)

resp = ola_mundo_r("Gonçalo")

print(resp)


def idade(idade: int):
    print(f"a idade é {idade}")

idade(21)
idade("Vinte cinco")

