

#def soma(valor1:int, valor2:int = 0):
#    return valor1 + valor2

def func2(*args):
    return args


def soma(*args):
    """
    :param args: conjunto de numeros
    :return: soma de todos os os num
    """
    soma_res = 0

    for num in args:
        soma_res += num

    return soma_res



def soma0To(num):
    s = num
    for i in range(num):
        s += i
    return  s

def soma2(*args):
    """
    escreva uma func que receba um conjunto de numeros, e calcula a soma das de todos os num de 0 ate cada um dos elementos do conjunto de num

   entrada - 2, 4
   (0+1+2) + (0+1+2+3+4) <-> 3 + 10 =  13

    :param args: conjunto de numeros
    :return: soma de todos os os num
    """

    soma_res = 0

    for num in args:
        soma_res += soma0To(num)

    return soma_res