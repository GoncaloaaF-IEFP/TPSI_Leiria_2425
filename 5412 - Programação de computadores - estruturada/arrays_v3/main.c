#include <stdio.h>



int main(void) {
    int lst[5]; // def o size do array

    lst[0] = 1;

    lst[4] = 5;

    lst[3] = 61;


    for (int i = 0; i < 5; i++) {
        printf("idx %d - %d\n",i, lst[i]);
    }


    return 0;
}