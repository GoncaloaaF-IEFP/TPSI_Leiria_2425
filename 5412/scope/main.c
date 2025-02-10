#include <stdio.h>

int main(void) {

    int a = 10;
    int b = 20;
    int c = 99;

    if (a == 10) {
        printf("--------\n");
        printf("a = %d, b = %d, c= %d\n", a, b, c);
        int c = 20;
        printf("a = %d, b = %d, c= %d\n", a, b, c);

        b = 10;

        printf("--------\n");
    }

  //  printf("a = %d, b = %d\n", a, b);
    printf("a = %d, b = %d, c= %d\n", a, b, c);






    printf("--------\n");
    printf("--------\n");
    printf("--------\n");




    a = 10;
    b = 20;
    c = 99;

    int x = 10;
    printf("0 - %d\n", x);
    if (a == 10) {
        printf("1 - %d\n", x);
        x = 15;
        printf("2 - %d\n", x);
        int x = 1;
        printf("3 - %d\n", x);
        if (b == 20) {
            printf("4 - %d\n", x);
            x = 5;
            printf("5 - %d\n", x);
            int x = -10;
            printf("6 - %d\n", x);
            if (c == 99) {
                printf("7 - %d\n", x);
                x = 90;
                printf("8 - %d\n", x);
                int x = 999;
                printf("9 - %d\n", x);
            }
            printf("10 - %d\n", x);
        }
        printf("11 - %d\n", x);
    }
    printf("12 - %d\n", x);




    return 0;
}