#include <stdio.h>
#include "../lib/maiorde2num.h"

int main(){
    int v1, v2;
    printf("Digite um número\n");
    scanf("%d",&v1);

    printf("Digite outro número\n");
    scanf("%d",&v2);
    
    printf("%d\n",maior(v1,v2));

    return 0;
    }     
 