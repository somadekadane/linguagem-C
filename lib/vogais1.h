#include <stdio.h>

#include "../lib/vogais1.h"

void vogais1(char letra){
if(letra=='a' || letra=='e' || letra=='i' || letra=='o' || letra=='u'){
    printf("A letra digitada é uma vogal");
}
else{
    printf("A letra digitada é consoante");
}
}