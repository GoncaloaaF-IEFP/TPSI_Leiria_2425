



"""

Mostrar o dobro de cada valor passado para dentro da func

"""
def func2(*args):
    lista = []

    for arg in args:
        dobro = arg * 2
        lista.append(dobro)
    return lista


d = func2(1,2,3,4,5)

print(d)
