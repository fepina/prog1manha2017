#include <stdio.h>
int main()
{
  int vetor[10],i,chave;
  for(i=0;i<10;i++)
  {
    printf("\nEntre com um número: ");
    scanf("%d",&vetor[i]);
  }
  printf("\nEntre com o numero da chave: ");
  scanf("%d",&chave);
  
  for(i=0;i<10;i++)
  {if(chave==vetor[i])
    {
    printf("\nChave encontrada no vetor");
    }
   else
  {
    printf("\nChave não encontrada no vetor");
  }
  }
  return 0;
}