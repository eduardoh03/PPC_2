#include <stdio.h>
int main(int argc, char const *argv[])
{
    int numeros[15],cont,somatorio=0;
    float media;
    for (cont = 0; cont < 15; cont++){
    printf("informe a nota do aluno [%d]\n", cont+1);
    scanf("%d", &numeros[cont]);
    if (numeros[cont]>10 ||numeros[cont]<0)
    {
        printf("Valor invalido, informe o valor novamente: \n");
        scanf("%d", &numeros[cont]);
    }
    
}
    for (cont = 0; cont < 15; cont++){
    somatorio = somatorio + numeros[cont];
}
    media = (float) somatorio /15;
    printf("A soma das notas é = %d\n", somatorio);
    printf("A media das notas é = %.2f\n", media);
    return 0;
}