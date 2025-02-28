#include <stdio.h>
#include <string.h>

struct Pessoa {
    char nome[10];
    int idade;
};

typedef int inteiro;

typedef struct Aluno {
    char nome[10];
    int idade;
    char turma[10];
} Aluno;


void showAlunoInfo(Aluno a);
void showAluno1(Aluno listaAlunos[], int idx);
void showAluno2(Aluno listaAlunos[], int idx);

int main(void) {

    struct Pessoa p1;

    p1.idade = 18;
    strcpy(p1.nome, "John");


    Aluno al;
    al.idade = 18;
    strcpy(al.nome, "Rui");
    strcpy(al.turma, "TPSI");
    printf("strlen - %lu\n\n", strlen(al.turma));


    printf("nome: %s\n", al.nome);
    printf("Turma: %s", al.turma);

    printf("\n----info Aluno----\n");
    showAlunoInfo(al);

    printf("\n------------------\n");

    Aluno listaAlunos[5];

    for (int i = 0; i < 5; i++) {
        listaAlunos[i] = al;
    }


    printf("\n------------------\n");

    printf("nome: %s\n", listaAlunos[0].nome);

    return 0;
}
void showAluno1(Aluno listaAlunos[], int idx) {

    Aluno al = listaAlunos[idx];
    printf("Nome: %s\n", al.nome);
    printf("Idade: %d\n", al.idade);
    printf("Turma: %s\n", al.turma);

}

void showAluno2(Aluno listaAlunos[], int idx) {

    listaAlunos[idx];
    printf("Nome: %s\n", listaAlunos[idx].nome);
    printf("Idade: %d\n", listaAlunos[idx].idade);
    printf("Turma: %s\n", listaAlunos[idx].turma);

}


void showAlunoInfo(Aluno a) {
    printf("Nome: %s\n", a.nome);
    printf("Idade: %d\n", a.idade);
    printf("Turma: %s\n", a.turma);
}
