#include <stdio.h>
void reajuste(float salario){

    float valor_aumento;
    float novo_salario;
    if(salario <= 280){
        valor_aumento = salario * (20.0 / 100);
        novo_salario = salario + valor_aumento;
        printf("O salário antigo é %.2f e foi reajustado em 20%. o valor de aumento é %.2f e novo salário é %f\n",salario,valor_aumento,novo_salario);
    }
        else if(salario > 280 && salario <= 700){
            valor_aumento = salario * (15.0 / 100);
            novo_salario = salario + valor_aumento;
            printf("O salário antigo é %.2f e foi reajustado em 15%. o valor de aumento é %.2f e novo salário é %.2f\n",salario,valor_aumento,novo_salario);
    }
        else if(salario <1500){
            valor_aumento = salario * (10.0 / 100);
            novo_salario = salario + valor_aumento;
            printf("O salário antigo é %.2f e foi reajustado em 10%. o valor de aumento é %.2f e novo salário é %.2f\n",salario,valor_aumento,novo_salario);
    }
       else{
           valor_aumento = salario * (5.0 / 100);
           novo_salario = salario + valor_aumento;
           printf("O salário antigo é %.2f e foi reajustado em 5%. o valor de aumento é %.2f e novo salário é %.2f\n",salario,valor_aumento,novo_salario);
    }
}

