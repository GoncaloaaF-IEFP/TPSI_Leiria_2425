#include <stdio.h>



int multipComSoma(int a, int b);
int soma(int a, int b);


int main(void) {

    int res =  multipComSoma(5, 5);

    printf("multip = %d\n", res);

    return 0;
}

// a = 5
int multipComSoma(int a, int b) {

    /*
     * 5 x 4  <-> 5 + 5 + 5 + 5
     *
     * 5 * 6 <-> 5 + 5 + 5 + 5 + 5 + 5 <-> 6 + 6 + 6 + 6 + 6
     *
     */

    int res = 0;
    for (int i = 0; i < a; i++) {

        res = soma(res, b);
    }
    return res;

}






















int soma(int a, int b) {
    return a + b;
}

