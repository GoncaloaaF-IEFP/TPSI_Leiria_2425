# tendo como base o ex da media valide o input do utilizador, deve assumir que o utilizador vai sempre dar como input valores numericos.
# uma nota e valida se estiver entre 0 e 20
print("Ex validar")
def ex4_2(num_notas:int):
    total = 0.0
    notas_lidas = 0

    while notas_lidas < num_notas:
        nota = float(input(f"Digite a nota {notas_lidas + 1}: "))

        if nota >= 0 and nota <= 20: #  if 0 <= nota <= 20:
            total += nota
            notas_lidas += 1
        else:
            print("nota invalida, a nota deve ser entre 0 e 20")

    media = total / num_notas

    print(f"a meida das notas é: {media}")


ex4_2(3)