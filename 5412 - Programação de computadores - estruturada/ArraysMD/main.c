#include <stdio.h>

int main(void) {
/*
    int max = 4;

    // opt1
    int lista[] = {1,2,3,4};

    // opt2
    int lista2[max];

    // lista2 = {1,2,3,4}; <- não e possivel de forma direta

    lista2[0] = 1;
    lista2[1] = 1;
    lista2[2] = 1;
    lista2[3] = 1;

    14	37	29
    31	43	10
    33	42	7

*/

    int abc[3][3] = {   {14, 37, 29},
                        {31, 43, 10},
                        {33, 42, 7}};


    printf("%d\n", abc[1][1]);
    printf("%d\n", abc[1][2]);
    printf("%d\n", abc[2][1]);


    /*
     * faça o print da mat como no exemplo
     *  14  37  29
     *  31  43  10
     *  33  42  7
     *
     *
     *
     *
     */


    return 0;
}