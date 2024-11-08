#include <stdio.h>

#include "../lib/vogais.h"
void vogal(char letra){
    if(letra=='a'){
        printf("A é vogal");
    }
    else if(letra == 'e'){
        printf("E é vogal");
    }
    else if(letra == 'i'){
        printf("I é vogal");
    }
    else if(letra == 'o'){
        printf("O é vogal");
    }
    else if(letra == 'u'){
        printf("U é vogal");
    }
    else {
        printf("%c é consoante",letra);
    }
    
    }