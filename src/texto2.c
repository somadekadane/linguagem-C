#include <stdio.h>

int main(){

char nome[20];

printf("Digite seu nome e tecle Enter\n");
// [^\n] Inclui a cadeia completa incluindo os espaços
scanf("%[^\n]s",&nome);
printf("Olá, %s. Seja bem-vindo!\n",nome);
 return 0;   
}