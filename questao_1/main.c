#include <stdio.h>
int main(int argc, char const *argv[])
{
    int count=5;
    for (size_t i = 0; i < count; i++)
    {
        int x=i;
        int val;
        printf("Informe o %d numero: ",x+1);
        scanf("%d",&val);
        printf("O digitado foi de %d\n",val);
    }
    
    return 0;
}
