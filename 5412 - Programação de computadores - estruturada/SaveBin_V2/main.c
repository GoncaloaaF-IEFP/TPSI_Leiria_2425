#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FILEPATH "../Pessoas.bin"
#define MAX_NAME 50
#define MAX_PEOPLE 100


typedef struct {
    char nome[MAX_NAME];
    char aplido[MAX_NAME];
    char turma[MAX_NAME];
    int idade;
} Pessoa;

/*
 * nome - nome + ext do file
 * modo -  wb - Escrita bin- reescreve
 *         ab - Escrita bin (appned)
 *         rb - modo Leitura bin
 */


void savePessoa(Pessoa *pessoas, int numPessoas);
int loadPessoa(Pessoa *pessoas, int maxPessoas);
void showPessoa(Pessoa pessoas, int index);

int main(void) {
/*
    Pessoa p = {"Maria", "aplido", "turma", 50};
    Pessoa pessoas[] = {
        {"Joao", "aplido", "turma", 50},
        {"Pedro", "aplido", "turma", 50},
        {"Rui", "aplido", "turma", 50},
        p
    };


    int numPessoas = sizeof(pessoas) / sizeof(Pessoa);
    printf("%d", numPessoas);

    savePessoa(pessoas, numPessoas);


*/

    Pessoa pessoasFile[MAX_PEOPLE];
    int numLidos = loadPessoa(pessoasFile, MAX_PEOPLE);
    int numMaxPessoas = sizeof(pessoasFile) / sizeof(Pessoa);


    printf("Pessoas max %d\n", numMaxPessoas);
    printf("Pessoas lida %d\n", numLidos);

    for (int i = 0; i < numLidos; i++) {
        showPessoa(pessoasFile[i], i+1);
    }


    return 0;
}

void savePessoa(Pessoa *pessoas, int numPessoas) {

    FILE *file = fopen(FILEPATH, "wb");

    fwrite(pessoas, sizeof(Pessoa), numPessoas, file);

    fclose(file);
}


int loadPessoa(Pessoa *pessoas, int maxPessoas) {
    FILE *file = fopen(FILEPATH, "rb");

    int lidos = fread(pessoas, sizeof(Pessoa), maxPessoas, file);

    fclose(file);

    return lidos;

}


void showPessoa(Pessoa pessoas, int index) {
    printf("------- Pessoa %d -----------\n", index);

    printf("nome:\t%s %s\n", pessoas.nome, pessoas.aplido);
    printf("idade:\t%d\n", pessoas.idade);
    printf("turma:\t%s\n", pessoas.turma);

    printf("----------------------------\n");
}