#include <stdio.h>
int main ()
{
  int num;
  puts("\nEntre com um num de 1 a 3:");
  scanf("%d",&num);
  switch(num)//testa o valor digitado (comando de decisão como o if)
  {
    case 1:
      printf("\nopção 1 escolhida\n");
      break;// Força saida do laço
    case 2:
      printf("\nopção 2 escolhida\n");
      break;
    case 3:
      printf("\nopção 3 escolhida\n");
      break;
    default:
      printf("\nOpçao invalida\n");
        
  }
  return 0;
}