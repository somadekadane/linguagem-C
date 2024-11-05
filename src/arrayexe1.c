#include <stdio.h>

int main(){
    int numeros[] = {33,8,7,11,54,77,13,16};
    int i;
        
    for( i = 0 ; i <= 7; i++){
    if( numeros[i] % 2 == 0){
    printf("O valor %d é par\n" ,numeros[i]);
     
    } 
}
        
    return 0;
}