#include <stdio.h>

double maiorPreco(double p1, double p2) {
    if (p1 > p2) {
        return p1;
    }
    return p2;
}

int main(void) {
    double preco1, preco2;

    printf("===== COMPARADOR DE PRECOS =====\n\n");

    printf("Preco 1: ");
    scanf("%lf", &preco1);
    printf("Preco 2: ");
    scanf("%lf", &preco2);

    printf("\n");

    if (preco1 == preco2) {
        printf("Os precos sao iguais: R$ %.2f\n", preco1);
    } else {
        printf("Maior preco: R$ %.2f\n", maiorPreco(preco1, preco2));
    }

    return 0;
}
