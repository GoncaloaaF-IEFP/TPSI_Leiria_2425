#include <stdio.h>


/*
 * tipos de dados -> int, float, double e char
 * var
 * in/out
 * op com var
 * condições - if/else if/ else
 *             switch case
 *  loops - for
 *          while
 *          do-while
 *
 *  arrays - 1D
 *
 */







/*
 *
 * Faça um Programa que leia um array de 10 números reais e mostre-os na ordem inversa.
 *
 *  ler 10 números
 *  guardar os 10 números num array
 *  mostre-os na ordem inversa.
 *
 *
 *
 *
 */
int ARRAY_SIZE = 10;


void showArray(float listaNum[], int size);
int eConsoantes(char letra);
int contarConsoantes(char letra[], int size);


int main(void) {
    float listaNum[ARRAY_SIZE];
    char listaChar[ARRAY_SIZE];
;

    if (1){
        printf("funciona sempre \n\n");
    }

    if (0){
        printf("nunca funciona");
    }

/*
    for (int i = 0; i < ARRAY_SIZE; i++) {
        float num;
        printf("Digite o %dº numero: ", i+1);
        scanf("%f", &num);

        listaNum[i] = num;
    }

    showArray(listaNum, ARRAY_SIZE);
*/

    for (int i = 0; i < ARRAY_SIZE; i++) {
        char letra;

        printf("Digite o %dº char: ", i+1);
        scanf("%c", &letra);
        fflush(stdin);
        listaChar[i] = letra;

    }

    int numConsoantes = contarConsoantes(listaChar, ARRAY_SIZE);

    printf("num de consoanrtes: %d\n", numConsoantes);

    return 0;
}

void showArray(float listaNum[], int size) {
    printf("Lista de numeros:\n");

    for (int i = size - 1; i >= 0; i--) {

        printf("%.2f\n", listaNum[i]);
    }

}


/*
 * Faça um Programa que leia um array de 10 caracteres,
 * e diga quantas consoantes foram lidas.
 *
 * Imprima as consoantes.
*/
int eConsoantes(char letra) {
// vogais - a, e, i, o, u

    switch (letra) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            return 0;
        default:
            return 1;
    }
}

int contarConsoantes(char letra[], int size) {
    int numConsoantes = 0;

    for (int i = 0; i <= size; i++) {

        if (eConsoantes(letra[i])) {
            numConsoantes++;
        }
    }

    return  numConsoantes;
}



