#include <stdio.h>

int main() {
    int valor = 20;
    int *ptr = &valor;

    printf("Valor da variável: %d\n", valor);
    printf("Endereço da variável: %p\n", (void *)&valor);
    printf("Valor acessado pelo ponteiro: %d\n", *ptr);

    return 0;
}