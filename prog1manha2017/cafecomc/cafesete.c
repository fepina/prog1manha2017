#include<stdio.h>

#include<stdlib.h>

#include<math.h>//Para as funções sqrt e pow

int main()
  
{
  float a;
  float b;
  float h;
  
  printf("\nInsira o cateto a:");
  scanf("%f",&a);
  printf("\nInsira o cateto b:");
  scanf("%f",&b);
  
  a=a*a;
  b=b*b;
  h=sqrt(a+b);
  printf("\nA hipotenusa é:%.2f",h);
  
  
  return 0;
}

//Em qualquer triângulo retângulo, o quadrado do comprimento da hipotenusa é igual à soma

//dos quadrados dos comprimentos dos catetos. Faça um programa para ler 2 catetos de um

//triângulo retângulo e calcular a hipotenusa.