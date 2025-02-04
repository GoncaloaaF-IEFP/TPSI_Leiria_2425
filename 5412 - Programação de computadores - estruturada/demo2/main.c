#include <stdio.h>

int main(void) {
    int nome;
    int _nome;
    int no_me;
    int nome_;
    int nome1;
    int no5me;

    // printf("%d", idade);

    int idade = 99;
    int anoNascimento;
    int anoAtual = 2025;
    int outroAno = 2012;



    printf("Qual a sua idade: ");
    scanf("%d", &idade);

    anoNascimento = anoAtual - idade;

    printf("Nasceu em %d", anoNascimento);


    return 0;
}

