#include <stdio.h>

int main(){
    FILE *arquivo;
    arquivo = fopen("files/texto.txt","a");
    // w -> Write(escrever)
    // r -> Read(ler)
    // a -> Apprend (adicionar)
    fprintf(arquivo,"Hoje é terça-feira!.\n");
    fclose(arquivo);
    printf("Criamos um arquivo.\n");
    return 0;
}
