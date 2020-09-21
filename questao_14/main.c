#include <stdio.h>

typedef struct {
        long codigo;
        float preco;
} Produto;

int main(){
        int quantprod;
        printf("Quantos produtos deseja cadastrar?\n");
        scanf("%d",&quantprod);
        Produto produtos[quantprod];

        for(int i=0; (i < quantprod); i++){
                printf("\nInforme os dados do produto(%i): \n",i+1);
                printf("Codigo :");
                scanf("%ld",&produtos[i].codigo);
                printf("Preço :");
                scanf("%f",&produtos[i].preco);
        }

        printf("----ESTOQUE----");
        for(int i=0; (i < quantprod); i++){
                printf("\n%ld\t R$ %1.2f", produtos[i].codigo,produtos[i].preco);
        }

        long codigo_digitado;
        printf("\nInforme o codigo do produto: ");
        scanf("%ld", &codigo_digitado);

        for(int i=0; (i < quantprod); i++){
                if (produtos[i].codigo == codigo_digitado) {
                        printf("\nPreço: R$ %1.2f\n", produtos[i].preco);
                }
        }

        return 0;
}
