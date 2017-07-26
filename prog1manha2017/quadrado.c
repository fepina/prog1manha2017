#include <stdio.h>
int main()
{
  int lado, linha, i, j;
  printf("\nEntre com o lado: ");
  scanf("%d",&lado);
  for(j=1;j<=lado;j++)
  { 
    //imprimi linha
    for(i=1;i<=lado;i++)
    {
      printf("*");
  }
    printf("\n");
  }
   return 0;
}