#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define FILEPATH "../Pessoa.myApp"
#define MAX_NAME 50


typedef struct {
    char nome[MAX_NAME];
    int idade;
} Pessoa;

/*
 * nome - nome + ext do file
 * modo -  wb - Escrita bin- reescreve
 *         ab - Escrita bin (appned)
 *         rb - modo Leitura bin
 */


void savePessoa(Pessoa *pessoa);
void loadPessoa(Pessoa *pessoa);


int main(void) {

    Pessoa p = {"Maria", 50};
    Pessoa pessoas[] = {
        {"Joao", 30},
        {"Pedro", 19},
        {"Rui", 21},
        p
    };

   // savePessoa(&p);

    Pessoa p2;

    loadPessoa(&p2);

    printf("nome: %s\n", p2.nome);
    printf("idade: %d\n", p2.idade);



    return 0;
}

void savePessoa(Pessoa *pessoa) {

    FILE *file = fopen(FILEPATH, "wb");

    fwrite(pessoa, sizeof(Pessoa), 1, file);

    fclose(file);
}


void loadPessoa(Pessoa *pessoa) {
    FILE *file = fopen(FILEPATH, "rb");

    fread(pessoa, sizeof(Pessoa), 1, file);

    fclose(file);

}