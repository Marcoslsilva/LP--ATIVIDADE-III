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

    int idade[5], i, maxIdade = 0, minIdade = 999999999;
    float peso[5], altura[5], minPeso = 9999999, maxPeso = 0, minAltura = 99999999, maxAlt = 0;
    char nomes[5][900], nomeMinAltura[900], nomeMinPeso[900], nomeMinIdade[900], nomeMaxAltura[900], nomeMaxPeso[900], nomeMaxIdade[900];

    for (i = 0; i < 5; i++)
    {
        fflush(stdin);
        
        printf("Digite  %dº nome \n", i + 1);
        gets(nomes[i]);


        printf("Digite a %dª idade \n", i + 1);
        scanf("%d", &idade[i]);

        printf("Digite a %dª altura \n", i + 1);
        scanf("%f", &altura[i]);

        printf("Digite o %dº peso \n", i + 1);
        scanf("%f", &peso[i]);


        if (altura[i] < minAltura)
        {
            minAltura = altura[i];
            strcpy(nomes[i], nomeMinAltura);
        }
        if (altura[i] > maxAlt)
        {
            maxAlt = altura[i];
            strcpy(nomeMaxAltura, nomes[i]);
        }
        if (peso[i] > maxPeso)
        {
            maxPeso = peso[i];
            strcpy(nomeMaxPeso, nomes[i]);
        }
        if (peso[i] < minPeso)
        {
            minPeso = peso[i];
            strcpy(nomeMinPeso, nomes[i]);
        }
        if (idade[i] < minIdade)
        {
            minIdade = idade[i];
            strcpy(nomeMinIdade, nomes[i]);
        }
        if (idade[i] > maxIdade)
        {
            maxIdade = idade[i];
            strcpy(nomeMaxIdade, nomes[i]);
        }
    }

    system("cls");

    for (i = 0; i < 5; i++)
    {
        printf("Nomes: %s \n", nomes[i]);
        printf("Altura: %.1f \n", altura[i]);
        printf("Peso: %.1f \n", peso[i]);
        printf("Idade: %d \n", idade[i]);
    }

    printf("Pessoa mais alta: %s, %.1f\n", nomeMaxAltura, maxAlt);
    printf("Pessoa mais baixa: %s, %.1f\n", nomeMinAltura, minAltura);
    printf("Pessoa com mais peso: %s, %.1f\n", nomeMaxPeso, maxPeso);
    printf("Pessoa com menos peso: %s, %.1f\n", nomeMinPeso, minPeso);
    printf("Pessoa mais velha: %s, %d\n", nomeMaxIdade, maxIdade);
    printf("Pessoa mais nova: %s, %d\n", nomeMinIdade, minIdade);

    return 0;
}
