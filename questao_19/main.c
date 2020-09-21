#include <stdio.h>
#include <stdlib.h>
int main(){
int x,y;
printf("Digite um numero :\n");
scanf("%d,&x");
printf("Digite outro numero :\n");
scanf("%d,&y");
if (&x > &y)
{
    return printf("O endereço de X é maior que o de Y\n");    
}else
{
    return printf("O endereço de Y é maior que o de X\n");
}
return 0;
}
