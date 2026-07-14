#include <stdio.h>

int main() {
    int tamanho;

    printf("=====================================\n");
    printf("      GERADOR DE SENHAS EM C\n");
    printf("=====================================\n\n");

    printf("Digite o tamanho da senha: ");
    scanf("%d", &tamanho);

    printf("\nVoce escolheu uma senha com %d caracteres.\n", tamanho);

    return 0;
}
