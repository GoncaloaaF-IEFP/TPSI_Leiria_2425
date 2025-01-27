#include <stdio.h>

int main(void) {

    /*
     * ==
     * >
     * <
     * >=
     * >=
     *
     * ! - negar ( Diferent)
     *
     */

    int val1;

    printf("Enter a number: ");
    scanf("%d", &val1);


    if (val1 == 1) {
        printf("OK");
    } else {
        printf("Nao OK");
    }




    return 0;
}