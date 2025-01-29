#include <stdio.h>

int main(void) {

    int num = 0;

    while (num >= 0) {
        printf("enter a number: ");
        scanf("%d", &num);

        if (num == 42) {
            printf("o programa vai encontrar um break\n");
            break;
        }

    }


    printf("o programa vai terminar");
    return 0;
}