#include <stdio.h>

/*
 * faça um programa que peça ao utlizador  um número e calcula a tabuada desse número
 *
 *  deve utlizar o ciclo -> for <- e assumir que a tabuada vai do 0 ao 10
 *
 *  Exp:
 *
 *  input: 2
 *
 *  out:
 *
 *  2 x 1 = 2
 *  2 x 2 = 4
 *  2 x 3 = 6
 *  2 x 4 = 8
 *  2 x 5 = 10
 *  2 x 6 = 12
 *  2 x 7 = 14
 *  2 x 8 = 16
 *  2 x 9 = 18
 *  2 x 10 = 20
 *
 *
 * Alter o programa anterior de forma a pedir ao utilizador também ate que numero pretende a tabuada
 *
 * Ex1
 * in tab = 2
 *    num = 1
 *
 *  out
 *  2 x 1 = 2
 *  2 x 2 = 4
 *   ...
 *  2 x 9 = 18
 *  2 x 10 = 20
 *
 * Ex 1
 *  in tab = 2
 *    num = 20
 *
*  out
 *  2 x 1 = 2
 *  2 x 2 = 4
 *   ...
 *  2 x 19 = 28
 *  2 x 20 = 40
 *
 *
 * Alter o programa anterior de forma a pedir ao utilizador tabuadas sucessivas ate o
 * utilizar escrever -1, seja no num da tabuada, seja no numero de niveis que a tabuada tem
 *
 */

int main(void) {
    int num;
    int nivel;
/*
 *
 * || -> ou
 *
 * 0 || 1 -> 1
 * 1 || 1 -> 1
 * 0 || 0 -> 0
 *
 *
 * 0 && 1 -> 0
 * 1 && 1 ->  1
 * 0 && 0 -> 0
 *
 */
    while (1) {

        printf("Digite a tuabuada que quer calcular: ");
        scanf("%d", &num);
        if (num == -1) {
            break;
        }

        printf("quntos niveis?  ");
        scanf("%d", &nivel);
        if (nivel == -1) {
            break;
        }

        for (int i = 1; i <= nivel; i++) {
            int res = num * i;
            printf("%d x %d = %d\n", num, i, res);
        } // fim do while

        printf("\n-------------------------\n");
    }
    printf("o Programa vai terminar");



    return 0;
}