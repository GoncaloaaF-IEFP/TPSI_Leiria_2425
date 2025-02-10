#include <stdio.h>

int main(void) {
    /*
     *
     * Simule o comportamento do -> do-while <- usando o loop -> while <-
     *
     *  0 = false
     *  1 = true
     *
     */

    int i;

    while (1) {

        printf("Digite um numero: ");
        scanf("%d", &i);

        if (i == -1) {
            break; // termina o loop
        }
    }

    printf("fim do while");


    return 0;
}