#include <stdio.h>

int main(void) {
    int num = 10;
    printf("num %d\n", num);

    num = num + 1;
    printf("num = num + 1; %d\n", num);

    num += 1;
    printf("num += 1; %d\n", num);

    num ++;
    printf("num ++; %d\n", num);

    num = num + 5;
    printf("num = num + 5; %d\n", num);

    num += 5;
    printf("num += 5; %d\n", num);


    return 0;
}