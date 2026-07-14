#include <stdio.h>

int main() {
    int tamanho;
    int maiusculas, minusculas, numeros, simbolos;

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

    printf("\n========== RESUMO ==========\n");
    printf("Tamanho: %d\n", tamanho);
    printf("Maiusculas: %d\n", maiusculas);
    printf("Minusculas: %d\n", minusculas);
    printf("Numeros: %d\n", numeros);
    printf("Simbolos: %d\n", simbolos);

    return 0;
}
