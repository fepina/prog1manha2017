#include <stdio.h>
 
int main()
{
  int i;
  int soma;
  float media;
  
  i=1;
  soma=0;
  media=0;
    
  for (i=1; i=100; i++)
  {  soma=soma+i;
  }
  media=(float)soma/100;
  printf("%d\n",soma);
  printf("%f\n",media);
return 0; 
  }
//Faça um programa em C para somar os números inteiros de 1 a 100 e informar qual é a média