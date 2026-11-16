#include <stdio.h>
#include <string.h>

int main(void) {
    char nome[50];
    char codigo[10];
    char copiaNome[50];
    char curso[50];
    char mensagem[100];
    int cursoValido = 1;

    printf("===== CADASTRO DE ESTUDANTES =====\n\n");

    printf("Digite seu nome: ");
    scanf("%49s", nome);

    printf("Digite o codigo do curso (CC ou SI): ");
    scanf("%9s", codigo);

    if (strcmp(codigo, "CC") == 0) {
        strcpy(curso, "Ciencia da Computacao");
    } else if (strcmp(codigo, "SI") == 0) {
        strcpy(curso, "Sistemas de Informacao");
    } else {
        strcpy(curso, "Invalido");
        cursoValido = 0;
    }

    int quantidade = (int) strlen(nome);

    strcpy(copiaNome, nome);

    strcpy(mensagem, "Ola, ");
    strcat(mensagem, copiaNome);
    strcat(mensagem, "!");

    printf("\n===== DADOS DO ESTUDANTE =====\n");
    printf("Nome: %s\n", nome);
    printf("Quantidade de caracteres: %d\n", quantidade);
    printf("Curso: %s\n\n", curso);

    if (cursoValido) {
        printf("%s\n", mensagem);
    } else {
        printf("Codigo de curso invalido. Use CC ou SI.\n");
    }

    return 0;
}
