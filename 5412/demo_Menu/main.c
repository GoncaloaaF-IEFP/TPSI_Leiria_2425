#include <stdio.h>

int main(void) {
    int opt;

    printf("----------MENU---------\n");
    printf("| Opt1--------------1 |\n");
    printf("| Opt2--------------2 |\n");
    printf("| Opt3--------------3 |\n");
    printf("-----------------------\n");
    printf("opt: ");
    scanf("%d", &opt);

    /*
     * TODO:
     *  se o input for 1 indicar que selecionou a opt 1
     *  se o input for 2 indicar que selecionou a opt 2
     *  se o input for 3 indicar que selecionou a opt 3
     *  se for outro valor indicar que a opt é invalida
     *
     *
     */

    switch (opt) {
        case 1:
            printf("selecionou a opt 1\n");
            break;

        case 2:
            printf("selecionou a opt 2\n");


        case 3:
            printf("selecionou a opt 3\n");
            break;

        default:
            printf("opt not valid\n");
            break;
    }



    return 0;
}