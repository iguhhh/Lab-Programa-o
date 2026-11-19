#include <stdio.h>

int main() {
    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);

    printf("Valor: %d\n", numero);
    printf("Endereço de memória: %p\n", (void *)&numero);

    return 0;
}