#include <stdio.h>
#include <stdlib.h>
int main(void){

    int i;
    float numeros[10];
    int contNegativos = 0;
    float somaPositivos;

    for (i = 0; i < 10; i++){
    printf("Informe o numero [%d]", i+1);
    scanf("%f", &numeros[i]);

    if (numeros[i] < 0)
    {
        contNegativos +=1;
    }else
    {
        somaPositivos = somaPositivos + numeros[i]; 
    }  
    }  
    printf("Possui %d numeros negativos\n", contNegativos);
    printf("Soma dos positivos é = %.2f\n", somaPositivos);
    return 0;
}
