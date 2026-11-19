#include <stdio.h>

int main() {
    int valor = 15;
    int *ptr = &valor;

    printf("Antes da alteração: %d\n", valor);

    *ptr = 50;

    printf("Depois da alteração: %d\n", valor);

    return 0;
}