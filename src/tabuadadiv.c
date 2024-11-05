#include <stdio.h>
int main (){

    int n, i, rs;
    i = 1;
    printf("Digite u número para tabuada e tecle Enter\n");
    scanf("%d",&n);
    while( i <= 10){
        rs = n / i;
    printf("%d / %d = %d\n",n,i,rs);
    i++;     
    }
    return 0;
}    