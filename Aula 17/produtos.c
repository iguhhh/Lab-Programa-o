#include <stdio.h>
#include <string.h>

int main(void) {
    char nome[50];
    char categoria[20];
    char copiaNome[50];
    char descricao[100];
    char descricaoCategoria[20];
    int categoriaValida = 1;

    printf("===== CADASTRO DE PRODUTOS =====\n\n");

    printf("Digite o nome do produto: ");
    scanf("%49s", nome);

    printf("Digite a categoria (HARDWARE ou PERIFERICO): ");
    scanf("%19s", categoria);

    int quantidade = (int) strlen(nome);

    if (strcmp(categoria, "HARDWARE") == 0) {
        strcpy(descricaoCategoria, "Hardware");
    } else if (strcmp(categoria, "PERIFERICO") == 0) {
        strcpy(descricaoCategoria, "Periferico");
    } else {
        strcpy(descricaoCategoria, "Invalida");
        categoriaValida = 0;
    }

    strcpy(copiaNome, nome);

    strcpy(descricao, "Produto: ");
    strcat(descricao, copiaNome);

    printf("\n===== RESUMO DO CADASTRO =====\n");
    printf("Nome: %s\n", nome);
    printf("Quantidade de caracteres: %d\n", quantidade);
    printf("Categoria: %s\n", descricaoCategoria);
    printf("Descricao: %s\n\n", descricao);

    if (categoriaValida) {
        printf("Cadastro realizado com sucesso.\n");
    } else {
        printf("Categoria invalida. Use HARDWARE ou PERIFERICO.\n");
        printf("Cadastro nao realizado.\n");
    }

    return 0;
}
