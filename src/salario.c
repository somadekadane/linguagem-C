#include <stdio.h>

int main(){
    // O tipo float é para trabalhar com casas decimais
    float n1, mult1, mult2, mult3, mult10, soma, total;
    printf(" Digite um número e tecle Enter\n");
    scanf("%f", &n1);
    
    mult1=0.06 * n1; mult2=0.07 * n1; mult3=0.08 * n1;
    soma=mult1 + mult2 + mult3;
    total=n1 - soma;

printf("Calcular salário líquido do funcionario é %.2f\n", total);
printf("valor descontado de salário é %.2f\n", soma);
return 0;
}