#include <stdio.h>
/*
 * =
 * ==
 *
 */
int main(void) {
    int num1;
    int num2;

    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &num2);


    if (num1 > num2) {
        printf("O maior é %d", num1);
    } else if (num2 > num1) {
        printf("o maior é %d", num2);
    }else {
        printf("os num são iguais");
    }

    return 0;
}