#include <stdio.h>

int main(void) {

    int i;

    do {
       printf("Please enter an integer: ");
       scanf("%d", &i);

       printf("%d\n", i);
       //i++;

    }while (i != -1); // != diferente (não igual)

    printf("fim do loop\n");
    return 0;
}