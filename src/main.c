#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main() {

    int tamanho;
    int maiusculas, minusculas, numeros, simbolos;

    char caracteres[100] = "";

    char senha[100];

    printf("=====================================\n");
    printf("      GERADOR DE SENHAS EM C\n");
    printf("=====================================\n\n");

    printf("Digite o tamanho da senha: ");
    scanf("%d", &tamanho);

    printf("\nEscolha os tipos de caracteres:\n");

    printf("Usar letras maiusculas? (1 = Sim | 0 = Nao): ");
    scanf("%d", &maiusculas);

    printf("Usar letras minusculas? (1 = Sim | 0 = Nao): ");
    scanf("%d", &minusculas);

    printf("Usar numeros? (1 = Sim | 0 = Nao): ");
    scanf("%d", &numeros);

    printf("Usar simbolos? (1 = Sim | 0 = Nao): ");
    scanf("%d", &simbolos);

    if (maiusculas)
        strcat(caracteres, "ABCDEFGHIJKLMNOPQRSTUVWXYZ");

    if (minusculas)
        strcat(caracteres, "abcdefghijklmnopqrstuvwxyz");

    if (numeros)
        strcat(caracteres, "0123456789");

    if (simbolos)
        strcat(caracteres, "!@#$%&*+-=?");

    if (strlen(caracteres) == 0) {
        printf("\nErro: nenhum tipo de caractere foi selecionado.\n");
        return 1;
    }

    srand(time(NULL));

    int quantidade = strlen(caracteres);

    for (int i = 0; i < tamanho; i++) {

        int indice = rand() % quantidade;

        senha[i] = caracteres[indice];

    }

    senha[tamanho] = '\0';

    printf("\n=====================================\n");
    printf("Senha gerada: %s\n", senha);
    printf("=====================================\n");

    return 0;
}
