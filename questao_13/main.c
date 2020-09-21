#include <stdio.h>

typedef struct{
  char sexo;
  float peso;
  float altura;
  float cpf;
} Pessoa;


int main(){
  int quantPessoas;
  printf("Quantas pessoas deseja cadastrar?\n");
  scanf("%d",&quantPessoas);
        Pessoa pessoas[quantPessoas];

        for(int i=0; (i < quantPessoas); i++){
          printf("\nInforme os dados da pessoa(%i): \n",i+1);
          printf("Altura :");
          scanf("%f",&pessoas[i].altura);
          printf("Peso :");
          scanf("%f",&pessoas[i].peso);
          printf("CPF :");
          scanf("%f",&pessoas[i].cpf);
          printf("Sexo (m = masculino, f = feminino):");
          scanf("%s",&pessoas[i].sexo);
}

        printf("\nInforme o CPF da pessoa: ");
        float acharCpf;
        scanf("%f",&acharCpf); 

        printf("\nSexo\tIMC");
        for(int i=0; (i < quantPessoas); i++){ 
          if (acharCpf == pessoas[i].cpf){ 
            float imc = pessoas[i].peso / (pessoas[i].altura * pessoas[i].altura);
            printf("\n%c\t%1.2f\n",pessoas[i].sexo, imc);
            break;
  }
}

getchar();
return 0;
}