#include <stdio.h>
int main(){
    int i=1;
    float f = 0.6;
    char c = 'e';

    printf("ANTES\n\n");
    printf("Inteiro = %d\n",i);
    printf("Real = %f\n",f);
    printf("Char = %c\n\n", c);

    int *inteiro = &i;
    float *real = &f;
    char *caracter = &c;

    *inteiro = 3;
    *real = 22,65;
    *caracter = 'd';

    printf("APOS\n\n");
    printf("Inteiro = %d\n", *inteiro);
    printf("Real = %f\n", *real);
    printf("Char = %c\n", *caracter);
    return 0;
}