#include <stdio.h>
int main()
{
  int lado1;
  int lado2;
  int lado3;
  
  printf("\nInsira lado 1:");
  scanf("%d",&lado1);
  
  printf("\nInsira lado 2:");
  scanf("%d",&lado2);
  
  printf("\nInsira lado 3:");
  scanf("%d",&lado3);
  
  printf("\nLados:%d,%d,%d",lado1,lado2,lado3);
  
  if((lado1==lado2)&&(lado1==lado3))
  {
   printf("\nEquilatero");
  }
  else if((lado1!=lado2)&&(lado1!=lado3)&&(lado2!=lado3))
  {
    printf("\nEscaleno");
  }
  else if((lado1==lado2)||(lado1==lado3)||(lado2==lado3))
  {
    printf("\nIsoceles");
  }

  return 0;
}
//6) Faça um programa para ler 3 lados de um triângulo e determinar que tipo de triângulo foi lido:isósceles, equilátero, escaleno.//
