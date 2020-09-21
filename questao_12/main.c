#include <stdio.h>
#include <stdlib.h>
int main(void){
struct matricula{
    char nome[50];
    int matricula;
    float nota1;
    float nota2;
};
struct matricula aluno;

printf("\n---------- Cadastro de aluno -----------\n\n\n");
printf("Nome do aluno : ");

fgets(aluno.nome, 50, stdin);

printf("Informe o numero da matricula : ");
scanf("%d",&aluno.matricula);

printf("Informe a 1a. nota : ");
scanf("%f", &aluno.nota1);

printf("Informe a 2a. nota : ");
scanf("%f", &aluno.nota2);

printf("\n\n --------- Lendo os dados da struct ---------\n\n");
printf("Nome .................: %s", aluno.nome);
printf("Matrticula ...........: %d\n", aluno.matricula);
printf("Nota da 1a. prova  ......: %.1f\n", aluno.nota1);
printf("Nota da 2a. prova  ......: %.1f\n", aluno.nota2);

    return 0;
}

