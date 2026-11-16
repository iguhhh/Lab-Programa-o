#include <stdio.h>
#include <string.h>

int main(void) {
    char nome[50];
    char perfil[20];
    char confirmacao[50];
    char mensagem[100];
    char descricaoPerfil[20];
    int perfilValido = 1;

    printf("===== CADASTRO DE USUARIOS =====\n\n");

    printf("Digite seu nome: ");
    scanf("%49s", nome);

    printf("Digite seu perfil: ");
    scanf("%19s", perfil);

    int quantidade = (int) strlen(nome);

    if (strcmp(perfil, "ADMIN") == 0) {
        strcpy(descricaoPerfil, "Administrador");
    } else if (strcmp(perfil, "COMUM") == 0) {
        strcpy(descricaoPerfil, "Comum");
    } else {
        strcpy(descricaoPerfil, "Invalido");
        perfilValido = 0;
    }

    strcpy(confirmacao, nome);

    strcpy(mensagem, "Bem-vindo(a), ");
    strcat(mensagem, confirmacao);
    strcat(mensagem, "!");

    printf("\n===== DADOS CADASTRADOS =====\n");
    printf("Nome: %s\n", nome);
    printf("Quantidade de caracteres: %d\n", quantidade);
    printf("Perfil: %s\n\n", descricaoPerfil);

    if (perfilValido) {
        printf("%s\n", mensagem);
        printf("Cadastro realizado com sucesso.\n");
    } else {
        printf("Perfil invalido. Use ADMIN ou COMUM.\n");
        printf("Cadastro nao realizado.\n");
    }

    return 0;
}
