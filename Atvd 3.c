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

    printf("Digite seu n�mero: \n");
    gets(numeros[0]);

    do
    {
        i++;

        printf("Deseja adicionar mais um n�mero?\n");
        printf("Se sim digite 1\n");
        printf("Se n�o, digite 2\n");
        scanf("%d", &resposta);

        switch (resposta)
        {
        case 1:

            fflush(stdin);

            printf("Digite seu nome: \n");
            gets(nome[i]);

            printf("Digite seu n�mero: \n");
            gets(numeros[i]);

            break;

        case 2:

            for (j = 0; j < i; j++)
            {
                printf("%d� Nome cadastrado %s \n",j + 1, nome[j]);
                printf("%d� N�mero cadastrado: %s \n", j + 1, numeros[j]);
            }
            break;

        default:

            printf("Op��o inv�lida! Tente novamente.");
            break;
        }

    } while (resposta != 2);

    return 0;
}
