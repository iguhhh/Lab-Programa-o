#include <stdio.h>

int parouimpar(int n1) {
    return n1 % 2;
}

int main(void) {
    int n1;
    n1 = 0;

    printf("Qual o numero?");
    scanf("%d", &n1);

    if (parouimpar(n1) == 0) {
        printf("Par");
    } else { printf("Impar");
}

}
