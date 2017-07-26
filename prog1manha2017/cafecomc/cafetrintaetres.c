
#include <stdio.h>
int main()
{
int sigma=0;int n;int num;
printf("\nEntre com um numero: ");
  scanf("%d",&num);
  for (n=num;n>=1;n--)
    {sigma=sigma+n;}
  printf("\nO sigma de %d é %d",num,sigma);
return 0;
}