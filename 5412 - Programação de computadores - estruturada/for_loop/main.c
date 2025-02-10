#include <stdio.h>

int main(void) {

    // for (init; cond paragem; inc/dec)


    /*
     *      Inicio do loop
     *    for (1; 2; 4) {
     *      3
     *     }
     *
    *      depois da 1 volta
     *    for (; 1; 3) {
     *      2
     *     }
     *
     */

    int stop;
    printf("Digite a condição de paragem: ");
    scanf("%d", &stop);

    for (int i = 0; i < 100; i++) {
        printf("%d\n", i);

        if (i == stop) {
            break;
        }
    }

    printf("fora do loop");

    return 0;
}