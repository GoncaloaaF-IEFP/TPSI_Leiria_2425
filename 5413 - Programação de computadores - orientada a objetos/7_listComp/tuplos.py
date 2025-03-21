tp = ("Valor 1", "Valor 2", 21, True)

print(tp[0])
print(tp[1:3])



#tp[0] = "teste"

aux = list(tp)
aux[0] = "teste"
tp = tuple(aux)


(nome, apelido, idade, aprovado) = tp

print(nome)
print(apelido)
print(idade)
print(aprovado)
