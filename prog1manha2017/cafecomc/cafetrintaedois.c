#include <stdio.h>
int main()
{
int fat=1;
int n;int num;
printf("\nEntre com um numero: ");
  scanf("%d",&num);
  for (n=num;n>=1;n--)
    {fat=fat*n;}
  printf("\nO fatorial de %d é %d",num,fat);

return 0;
}

