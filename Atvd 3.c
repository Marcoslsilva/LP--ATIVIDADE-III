#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>
#include <stdbool.h>
#include <ctype.h>

int main()
{
    setlocale(LC_ALL, "");
    int resposta, i = 0, j;
    char nome[15][900], numeros[15][1500];

    printf("Digite seu nome: \n");
    gets(nome[0]);

    printf("Digite seu número: \n");
    gets(numeros[0]);

    do
    {
        i++;

        printf("Deseja adicionar mais um número?\n");
        printf("Se sim digite 1\n");
        printf("Se não, digite 2\n");
        scanf("%d", &resposta);

        switch (resposta)
        {
        case 1:

            fflush(stdin);

            printf("Digite seu nome: \n");
            gets(nome[i]);

            printf("Digite seu número: \n");
            gets(numeros[i]);

            break;

        case 2:

            for (j = 0; j < i; j++)
            {
                printf("%dº Nome cadastrado %s \n",j + 1, nome[j]);
                printf("%dº Número cadastrado: %s \n", j + 1, numeros[j]);
            }
            break;

        default:

            printf("Opção inválida! Tente novamente.");
            break;
        }

    } while (resposta != 2);

    return 0;
}
