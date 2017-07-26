#include <stdio.h>
int main()
{//19)Faça um programa em C para ler 2 números N1 e N2, trocar os valores de cada um e
  //imprimí-los novamente. Exemplo: N1 = 2 e N2 = 4, vc deve trocar N1 para N2 e N2 para N1.
  int a;
  int b;
  int c;
  printf("\nInsira a:");
  scanf("%d",&a);
  printf("\nInsira b:");
  scanf("%d",&b);
  
  c=a;
  a=b;
  b=c;
  
  printf("\na:%d",a);
  printf("\nb:%d",b);
return 0;
}

  
  
 