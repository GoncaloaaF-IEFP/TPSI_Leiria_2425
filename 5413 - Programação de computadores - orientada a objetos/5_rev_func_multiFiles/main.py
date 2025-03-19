"""

ifs -> semelhante a C
for
while -> semelhante a C
match -> em c e switch/case
funcs

intro a clsses -> rever em breve


funcs

multi files

"""

def nome():
    print("Ola Mundo")


nome()
nome()


def ola_mundo(nome: str):
    print(f"Ola Mundo, {nome.capitalize()}")


ola_mundo("Gonçalo")
ola_mundo("Rui")
#ola_mundo(1231)



def ola_mundo2(nome: str, ano:int):
    print(f"Ola Mundo, {nome.capitalize()} no ano {ano}")


ola_mundo2("Gonçalo ", 2005)


def nome_r() -> str:
    return "Ola Mundo return"


print(nome_r())

a = nome_r()
print(a)