#include <stdio.h>
int main(){
char nome[30];
int idade = 0;
char matricula[20];
char endereco[50];
char curso[40];
int periodo =0;
char diciplinas [70];
float mensalidade = 0;

printf("\nQual o seu nome?\n");
fgets(nome,30,stdin);

printf("\nQual sua idade?\n");
scanf("%d",&idade);
fflush(stdin);

printf("\nQual sua matricula?\n");
fgets(matricula,20,stdin);
fflush(stdin);

printf("\nQual o seu Endereco?\n");
fgets(endereco,50,stdin);

printf("\nQual o seu curso?\n");
fgets(curso,40,stdin);

printf("\nEsta em qual periodo?\n");
scanf("%d",&periodo);

fflush(stdin);
printf("\nQual as suas disciplinas?\n");
fgets(diciplinas,70,stdin);
fflush(stdin);

printf("\nQuanto e a sua mensalidade?\n");
scanf("%f",&mensalidade);

printf("\n-------------------------\n");
printf("\nInformacoes de Cadastro:\n");
printf("\n-------------------------\n");

printf("Nome: %s",nome);
printf("Idade: %d Anos",idade);
printf("\nMatricula: %s",matricula);
printf("Endereco: %s",endereco);
printf("Curso: %s",curso);
printf("Periodo: %d periodo\n",periodo);
printf("Disciplinas: %s",diciplinas);
printf("Mensalidade: %.2f Reais",mensalidade);
printf("\n-------------------------\n");
return 0;
}





