#include <stdio.h>

int main(void) {

    for (int contadorXPTO = 1; contadorXPTO < 500 ; contadorXPTO++) {

        printf("%d\n", contadorXPTO);
    }

    printf("\n-------------------\n");

    int x = 0;
    while (x < 10) {
        printf("%d\n", x);
        x++;
    }

    printf("\n-------------------\n");

    int j = 0;
    do {
        printf("%d\n", j);
        j++;
    }while (j < 10);

    return 0;
}