#include <stdio.h>
#include "../include/senha.h"

int main()
{
    int tamanho;
    int maiusculas, minusculas, numeros, simbolos;

    printf("=====================================\n");
    printf("      GERADOR DE SENHAS EM C\n");
    printf("=====================================\n\n");

    printf("Digite o tamanho da senha: ");
    scanf("%d", &tamanho);

    printf("Usar letras maiusculas? (1 = Sim | 0 = Nao): ");
    scanf("%d", &maiusculas);

    printf("Usar letras minusculas? (1 = Sim | 0 = Nao): ");
    scanf("%d", &minusculas);

    printf("Usar numeros? (1 = Sim | 0 = Nao): ");
    scanf("%d", &numeros);

    printf("Usar simbolos? (1 = Sim | 0 = Nao): ");
    scanf("%d", &simbolos);

    gerarSenha(
        tamanho,
        maiusculas,
        minusculas,
        numeros,
        simbolos
    );

    return 0;
}
