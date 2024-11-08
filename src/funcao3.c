/* Este programa funcao3.c
    Criador: Eder Silva
    Data: 7/11/2024
*/
#include <stdio.h>
// O camando ../ faz a saida da pasta atual src
// e lib é a pasta onde esta o arquivo de
// cabeçalho calculos.h
#include "../lib/calculos.h"

int main()
{
    int valores[] = {5,23,5,7,10,4,12,30};
    printf("O resultado da soma é %d\n",somaArray(valores,8));
    printf("O resultado média é %d\n",mediaArray(valores,8));
    printf("O maior valor é %d\n",maiorValor(valores,8));

    return 0;
}