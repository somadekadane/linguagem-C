#include <stdio.h>
#include "../lib/sexomascxfem.h"

int main(){
    char letra;
    printf("Digite M-Masculino ou F-Feminino\n");
    scanf("%c",&letra);
    sexo(letra);

    return 0;
}