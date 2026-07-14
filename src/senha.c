#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#include "../include/senha.h"

void gerarSenha(int tamanho,
                int maiusculas,
                int minusculas,
                int numeros,
                int simbolos)
{
    char caracteres[100] = "";
    char senha[100];
  
//LETRAS MAIUSCULAS
    if (maiusculas)
        strcat(caracteres, "ABCDEFGHIJKLMNOPQRSTUVWXYZ");
  
//LETRAS MINUSCULAS
    if (minusculas)
        strcat(caracteres, "abcdefghijklmnopqrstuvwxyz");
  
// NUMEROS
    if (numeros)
        strcat(caracteres, "0123456789");
  
// SIMBOLOS
    if (simbolos)
        strcat(caracteres, "!@#$%&*+-=?");

    if (strlen(caracteres) == 0)
    {
        printf("\nErro: nenhum tipo de caractere foi selecionado.\n");
        return;
    }

    srand(time(NULL));

    int quantidade = strlen(caracteres);

    for (int i = 0; i < tamanho; i++)
    {
        int indice = rand() % quantidade;
        senha[i] = caracteres[indice];
    }

    senha[tamanho] = '\0';


    printf("Senha gerada: %s\n", senha);

}
