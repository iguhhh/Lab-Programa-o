#include <stdio.h>

int dobro(int n1) {
    return n1 * 2;}

int main(void) {
    int n1;
    n1 = 0;

    printf("Qual o numero?");
    scanf("%d", &n1);

    printf("O dobro do numero e: %d", dobro(n1));
}
