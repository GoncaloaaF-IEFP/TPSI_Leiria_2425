#include <stdio.h>
void printMat(int mat[][3], int size);

int MAT_SIZE = 4;

int main(void) {
/*
    int max = 4;

    // opt1
    int lista[] = {1,2,3,4};

    // opt2
    int lista2[max];

    // lista2 = {1,2,3,4}; <- não e possivel de forma direta

    lista2[0] = 1;
    lista2[1] = 1;
    lista2[2] = 1;
    lista2[3] = 1;

    14	37	29
    31	43	10
    33	42	7

*/

    int abc[4][4] = {   {14, 37, 29, 32},
                        {31, 43, 10, 12},
                        {33, 42, 43, 37},
                        {33, 42, 37, 31}
    };


    printf("%d\n", abc[1][1]);
    printf("%d\n", abc[1][2]);
    printf("%d\n", abc[2][1]);


    /*
     * faça o print da mat como no exemplo
     *  14  37  29
     *  31  43  10
     *  33  42  7
     *
     */
/*
    for (int linha = 0; linha < 3; linha++) {

        for (int coluna = 0; coluna < 3; coluna++) {
           printf("%d\t", abc[linha][coluna]);
        }

        printf("\n");

    }
*/


    for (int linha = 0; linha < MAT_SIZE; linha++) {
        for (int coluna = 0; coluna < MAT_SIZE; coluna++) {
            printf("%d\t", abc[linha][coluna]);
        }

        printf("\n");

    }

    //printMat(abc, MAT_SIZE);
    /*
        * Some os valores da 1ª diagonal de mat, a deve funcionar para qualquer mat quadrada
        *  14  37  29
        *  31  43  10
        *  33  42  7
        *
        *  (14 + 43 + 7)
        *
        */


    int soma = 0;
    for (int i = 0; i < MAT_SIZE; i++) {
        printf("l=%d c= %d - %d\n",i, i, abc[i][i] );
        soma += abc[i][i];
    }

    // "A soma de %d + %d + %d + %d  é: %d\n", abc[0][0], abc[1][1], abc[2][2], abc[3][3], soma

    printf("A soma de ");
    for (int i = 0; i < MAT_SIZE-1; i++) {
        printf("%d + ", abc[i][i]);
    }
    printf("%d é: %d\n", abc[ MAT_SIZE-1][ MAT_SIZE-1], soma);



    /*
     *  Jogo Do Galo
     *
     *   1  2   3
     *   4  5   6
     *   7  8   9
     *
     * onde quer jogar (O): 5
     *
     *
     *   1  2   3
     *   4  O   6
     *   7  8   9
     *
    * onde quer jogar (X): 3
     *
     *   1  2   X
     *   4  O   6
     *   7  8   9
     *
    * onde quer jogar (0): 3
     *
     *   1  2   X
     *   4  O   6
     *   7  8   9
     *
     *  Jogada invalida, tente novamete
     *
     *   onde quer jogar (0):
     */




    return 0;
}










void printMat(int mat[][3], int size) {

    for (int linha = 0; linha < size; linha++) {
        for (int coluna = 0; coluna < size; coluna++) {
            printf("%d\t", mat[linha][coluna]);
        }

        printf("\n");

    }
}





