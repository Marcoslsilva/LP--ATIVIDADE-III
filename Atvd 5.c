#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

int main()
{
    setlocale(LC_ALL, "");
    char produto[50][900];
    float valor[50];
    int quantidade[50], i = 0, resposta, soma = 0, j;

    printf("Qual produto deseja comprar?");
    gets(produto[0]);

    printf("Qual o valor desse produto?");
    scanf("%f", &valor[0]);

    printf("Quantas unidades deseja comprar?");
    scanf("%d", &quantidade[0]);

    soma = quantidade[0];

    printf("Desejs comprar mais algum produto? \n");
    printf("Digite 1 para sim \n");
    printf("Digite 2 para não \n");
    scanf("%d", &resposta);

    do
    {
        i++;

        switch (resposta)
        {
        case 1:

            fflush(stdin);

            printf("Qual produto deseja comprar?");
            gets(produto[i]);

            printf("Qual o valor desse produto?");
            scanf("%f", &valor[i]);

            printf("Quantas unidades deseja comprar?");
            scanf("%d", &quantidade[i]);

            soma += quantidade[i];

            printf("Desejs comprar mais algum produto? \n");
            printf("Digite 1 para sim \n");
            printf("Digite 2 para não \n");
            scanf("%d", &resposta);

            break;

        default:

            printf("Opção inválida! Tente novamente");
            break;
        }

    } while (resposta != 2);

    for (j = 0; j < i + 1; j++)
    {
        printf("%dº produto: %s \n", j + 1, produto[j]);
        printf("Valor do %dº produto: R$%.2f \n", j + 1, valor[j]);
        printf("Total de vendas desse produto: %d \n", quantidade[j]);
    }

    printf("Total de vendas: %d", soma);
   
    return 0;
}
