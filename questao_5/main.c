#include <stdio.h>
int main() {
    int vet[5], i, maior, posMaior, menor, posMenor;

    //VETOR
    for (i = 0; i < 5; i++) {
        printf("Informe o %d vetor: ",i+1);
        scanf("%d", &vet[i]);
    }

    //MAIOR
    maior = vet[0];
    posMaior = 0;
    for (i = 1; i < 5; i++) {
        if (vet[i] > maior) {
            maior = vet[i];
            posMaior = i;
        }
    }

    //MENOR
    menor = vet[0];
    posMenor = 0;
    for (i = 1; i < 5; i++) {
        if (vet[i] < menor) {
            menor = vet[i];
            posMenor = i;
        }
    }

    //MOSTRAR VETOR
    printf("Vetor: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", vet[i]);
    }

    printf("\nA posicao do maior e: %d\n",posMaior);
    printf("A posicao do menor e: %d\n",posMenor);

    return 0;
}