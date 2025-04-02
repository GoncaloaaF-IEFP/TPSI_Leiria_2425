from modelo_pessoa import *


p = Professor("gONÇALO", "mail@mail.com")

print(p.lista_UFCDs)
print(f"Professor - {p.nome}: {p.email}")


a = Aluno("rui","mail@mail.com", "TETP" )

print(f"Aluno - {a.nome}: {a.email}")


p.mudar_email("professor@mail.com")
a.mudar_email("aluno@mail.com")

print(f"Professor: {p.email}")
print(f"Aluno: {a.email}")


a.set_media(10)
print(a.get_media())