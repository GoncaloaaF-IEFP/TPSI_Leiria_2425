#include <stdio.h>
#include <string.h>

int main(void) {

    /*
     * 10212
     * 'd'
     * 'e'
     * '4'
     *  arrays
     *
     *  "txt"
     *
     *  %d ou %i - int
     *  %f - floats
     *  %c - chars
     *
     *
     */

    char input[10];
    int idade;

    printf("Please enter your name: "); //   printf("Please enter your name: /0");
    scanf("%s", input);
    printf("Please enter your age: ");
    scanf("%d", &idade);

    printf("ola %s\n", input);
    printf("tens %d anos\n", idade);

    // input = "Joao"; <- não funciona


    //Crie uma array com 5 nomes. Os nomes devem ser pedidos ao utilizador

    char nomes[5][10];

    for (int i = 0; i < 5; i++) {
        printf("%d - Please enter your name: ", i + 1);
        fflush(stdin);
        scanf("%9s", nomes[i]);
    }

    printf("-----Lista de nomes------\n");
    for (int i = 0; i < 5; i++) {
        printf("nome %d -> %s\n",i + 1, nomes[i]);
    }

    printf("---fim Lista de nomes---\n");


    char nome[10] = "Goncalo";

    printf("%s\n", nome);

    printf("Novo nome: ");
    scanf("%s", nome);

    printf("%s\n", nome);

    nome[0] = 'A';
    nome[1] = 'n';
    nome[2] = 'a';
    nome[3] = '\0';

    printf("%s\n", nome);

    strcpy(nome, "Goncalo");


    printf("%s\n", nome);

    printf("--------------------------------\n");

    char str1[10];
    char str2[10];

    printf("str 1: ");
    scanf("%s", str1);
    printf("str 2: ");
    scanf("%s", str2);

    printf("\n Comp -> %d\n", strcmp(str1, str2) );

    if (strcmp(str1, str2) == 0) {
        printf("str 1 == str 2\n");
    }else {
        printf("str 1 != str 2\n");
    }


    return 0;
}