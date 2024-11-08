int maior(int n1, int n2){
    int rs = n1;
    if(n2 > n1){
      rs = n2;
    }
    return rs;
}

char sexo(char letra){
    if(letra == 'M' || letra == 'm'){
        printf("Masculino\n");
        }
    else if(letra=='F'|| letra == 'f'){
        printf("Feminino\n");
    }
    else{
        printf("Sexo inválido\n");
    }

}