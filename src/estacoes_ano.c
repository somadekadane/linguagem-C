#include <stdio.h>

int main() {
    int estacao;

    printf("Digite o mês do ano para saber a estação e tecle Enter\n");
    scanf("%d", &estacao);

    if (estacao==1 || estacao==2 || estacao==3){
    printf("A estação do ano é verão.\n");}

    else if (estacao==4 || estacao==5 || estacao==6){
    printf("A estação do ano é outuno.\n");}

    else if (estacao==7 || estacao==8 || estacao==9){
    printf("A estação do ano é inverno.\n");}

    else if (estacao==10 || estacao==11 || estacao==12){
    printf("A estação do ano é primavera.\n");}
    
    else{
        printf("Não é sua estação!");
    }
    printf("\n");

    return 0;
}