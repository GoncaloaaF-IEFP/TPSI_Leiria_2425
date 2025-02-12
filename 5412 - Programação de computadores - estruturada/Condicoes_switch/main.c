#include <stdio.h>


/*
 * se 1 -> Escrever "um"
 * se 2 -> Escrever "dois"
 * se 10 -> Escrever "dez"
 * se nao -> escrever "Outro valor"
 *
 */
int main(void) {

    int val = 1;

    /*

    if (val == 1) {
        printf("um");
    }else if (val == 2) {
        printf("dois");
    }else if (val == 10) {
        printf("dez");
    }else {
        printf("Outro valo");
    }

    */

    switch (val) {
        case 1:
            printf("um\n");
            break;

        case 2:
            printf("dois\n");
            break;

        case 10:
            printf("dez\n");
            break;

        default:
            printf("Outro valor\n");
            break;
    }





    return 0;
}