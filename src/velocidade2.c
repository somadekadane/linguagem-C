#include <stdio.h>

int main(){
    // velocidade media km inicial e final, tempo inicial e final
    float n1, n2, n3, n4, sub1, sub2, resultado;

    printf(" Digite a km inicia e tecle Enter\n");
    scanf("%f", &n1);
    printf("Digite a km final e tecle Entre\n");
    scanf("%f", &n2);

     sub1 = n1 - n2;

    printf(" Digite o tempo inicial e tecle Enter\n");
    scanf("%f", &n3);
    printf("Digite o tempo final e tecle Entre\n");
    scanf("%f", &n4);
     
    sub2 = n3 - n4;
    resultado = sub1 / sub2;

printf("Sua velocidade media é de: %.1fkm\n", resultado);
return 0;
}