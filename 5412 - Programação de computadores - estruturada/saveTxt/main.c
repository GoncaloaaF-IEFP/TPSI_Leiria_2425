#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define FILEPATH "../file_r.txt"
#define MAX_NAME 50


typedef struct {
    char nome[MAX_NAME];
    int idade;
} Pessoa;

/*
 * nome - nome + ext do file
 * modo -  w - Escrita - reescreve
 *         a - Escrita (appned)
 *         r - modo Leitura
 *
 *
 */

int main(void) {

    Pessoa p = {"Luis", 10};
    Pessoa pessoas[] = {
        {"Joao", 30},
        {"Pedro", 19},
        {"Rui", 21},
        p
    };

    // save to txt
    /*
    FILE *f = fopen(FILEPATH, "w");

    fprintf(f, "Linha 7  - Ola Mundo\n");

    fclose(f);
    */

    // read form txt
    char cont_file[50];

    // le tudo de uma vez
    FILE *f2 = fopen(FILEPATH, "r");

    fgets(cont_file, 50, f2);
    printf("%s\n", cont_file);


    fclose(f2);

    // le tudo partes
    FILE *f = fopen(FILEPATH, "r");

    fgets(cont_file, 10, f);
    printf("%s\n", cont_file);

    fgets(cont_file, 10, f);
    printf("%s\n", cont_file);

    fgets(cont_file, 10, f);
    printf("%s\n", cont_file);

    fclose(f);



    return 0;
}


