#include <stdio.h>
int main()
{ //10) Descubra o maior entre 3 números fornecidos pelo usuário//
  float n1;
  float n2;
  float n3;
  
  printf("\nInsira o primeiro numero:");
  scanf("%f",& n1);
  printf("\nInsira o segundo numero:");
  scanf("%f",& n2);
  printf("\nInsira o terceiro numero:");
  scanf("%f",&n3);
  
  
  if((n1>n2)&&(n2>=n3))
  {
    printf("O maior número é:%f",n1);
  }
   if((n1>n3)&&(n3>n1))
  {
    printf("O maior número é %f",n1);
   }
  if((n2>n1)&&(n1>n3))
  {
    printf("O maior número é %f",n2);
  }
  if((n2>n3)&&(n3>n1))
  {
    printf("O maior número é %f",n2);
  }
  if((n3>n1)&&(n1>n2))
  {
    printf("O maior número é %f",n3);
  }
  if((n3>n2)&&(n2>n1))
  {
    printf("O maior número é %f",n3);
  }
  if((n1==n2)&&(n2==n3))
  {
    printf("Os três números são iguais a %f",n3);
  }
 
  return 0;
}
  
