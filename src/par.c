/*
Este programa obtem um número do usuário
e diz se é par, exibindo uma mensagem em tela
 */
#include <stdio.h>
int main() {
int n;
printf("Digite um número e tele Enter\n");
scanf("%d" ,&n);
if( n % 2 == 0){
    printf("O valor %d é par\n ,n");
}
return 0;
}