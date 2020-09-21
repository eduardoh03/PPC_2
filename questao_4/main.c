#include <stdio.h>
 
//#define TAM 5 //cria uma constante
 
int main() {

    double vet[5];
    int i, maior, menor, somatorio = 0;
    double media = 0;

    //preenche o vetor
    for (i = 0; i < 5; i++) {
        printf("Informe o %d valor: ",i+1);
        scanf("%lf", &vet[i]);
    }

    //encontra o maior valor
    maior = vet[0];
    for (i = 1; i < 5; i++) {
        if (vet[i] > maior) {
            maior = vet[i];
        }
    }

    //encontra o menor valor
    menor = vet[0];
    for (i = 1; i < 5; i++) {
        if (vet[i] < menor) {
            menor = vet[i];
        }
    }

    //mostra o vetor
    printf("Vetor: ");
    for (i = 0; i < 5; i++) {
        printf("%.1lf ", vet[i]);
    }
    for (i = 0; i < 5; i++)
    {
        somatorio = somatorio + vet[i];
    }
    
    media = (double) somatorio/5;

    printf("\nMaior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);
    printf("Media : %.2lf\n", media);

    return 0;
}