#include <stdio.h>
#include "../include/senha.h"

int main()
{
    int tamanho;
    int maiusculas, minusculas, numeros, simbolos;
    int continuar = 1;

    printf("=====================================\n");
    printf("      GERADOR DE SENHAS EM C\n");
    printf("=====================================\n");

    while (continuar == 1)
    {
        printf("\nDigite o tamanho da senha (4 a 64): ");
        scanf("%d", &tamanho);

        if (tamanho < 4 || tamanho > 64)
        {
            printf("\nErro! O tamanho deve estar entre 4 e 64 caracteres.\n");
            continue;
        }

        printf("\nUsar letras maiusculas? (1 = Sim | 0 = Nao): ");
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

        printf("\nDeseja gerar outra senha?\n");
        printf("1 - Sim\n");
        printf("0 - Nao\n");
        printf("Opcao: ");
        scanf("%d", &continuar);
    }

    printf("\nObrigado por utilizar o Gerador de Senhas!\n");

    return 0;
}
