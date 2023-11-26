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
    // variaveis
   int Impar =0;
   int Par =0;
   int Negativo =0;
   int somaPar =0;
   int somaGeral =0;
   int Numero = -99999999;
   int Numero = 999999999;
   float media =0;
   int i;
   int numero =0;
   float mediaPar =0;
   int contador =0;


    for (i = 0; i < 5; i++){
        printf("Digite um numero\n");
        scanf("%d",&numero);

        if (numero % 2 != 0)
        {
            Impar++;
        }
        if (numero <0)
        {
            Negativo++;
        }
        if (numero > Numero)
        {
        Numero=numero;
        }
        if (numero < Numero)
        {
            Numero = numero;
        }
        if (numero % 2 ==0)
        {
            Par++;
            Par+= numero;
        }
        somaGeral+= numero;
        contador++;

    }
   mediaPar+=somaPar/Par;
   media+= somaGeral/contador; 

    printf("Impares: %d\n",Impar); 
    printf("Negativos: %d\n",Negativo);  
    printf("Maior numero : %d\n",Numero); 
    printf("Menor numero : %d\n",Numero); 
    printf("Media par: %.f\n", mediaPar);
    printf("Media geral: %.f\n", media); 
    
    





    return 0;
}