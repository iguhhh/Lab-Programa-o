#include <stdio.h>

int main() {
    int vetor[5] = {10, 20, 30, 40, 50};
    int *ptr = vetor;

    for (int i = 0; i < 5; i++) {
        printf("Elemento %d: %d\n", i, *(ptr + i));
    }

    return 0;
}