#include <stdio.h>

int main(){
    float n1, n2, n3, n4, soma, divisao;
    printf(" Digite um número e tecle Enter\n");
    scanf("%f", &n1);
    printf("Digite outro número e tecle Entre\n");
    scanf("%f", &n2);
    printf(" Digite um número e tecle Enter\n");
    scanf("%f", &n3);
    printf("Digite outro número e tecle Entre\n");
    scanf("%f", &n4);

    soma = n1 + n2 + n3 + n4;
    divisao = soma / 4;

    printf("O resultado da soma é %.2f\n", soma);
    printf(" O resutadco da divisao é %.2f\n", divisao);
return 0;
}