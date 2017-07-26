#include <stdio.h>
int main()
{
  int idade;
  int anoatual;
  int nascimento;
  
  anoatual=2017;
  printf("Insira o ano do nascimento:\n");
  scanf("%d",&nascimento);
  idade=anoatual-nascimento;
  printf("\nSua idade é %d",idade);
  
  return 0;
}

//) Faça um programa em C para ler o ano de nascimento do usuário, calcular e informar a idade do mesmo.*//