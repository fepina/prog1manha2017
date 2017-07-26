#include <stdio.h>
int main()
{
int n, aprovado,i;
float nota,soma, media;
  i=1;
  printf("\nInsira a quantidade de alunos: ");
  scanf("%int",&n);
  while(i<=n)
  {printf("\nInserir a nota");
  scanf("%f",&nota);
  i=i+1;
  soma=soma+nota;
  if(nota>5)
    aprovado=aprovado+1;
    }
  media=soma/n;
  printf("\nA média é:%.2f\n",media);
  if(aprovado>=1)
    printf("\nAlunos com media maior que 5.0 %d:",aprovado);
  if(aprovado==0)
    printf("\nnao há nenhum aluno com nota acima de 5.0");
  return 0;
}//17)Fazer um programa em C para ler uma quantidade N de alunos. Ler a nota de cada um dos N alunos e calcular a média aritmética das notas.
//Contar quantos alunos estão com a nota acima de 5.0. Obs.: Se nenhum aluno tirou nota acima de 5.0, imprimir mensagem:Não há nenhum aluno com nota acima de 5.