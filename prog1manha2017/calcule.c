#include <stdio.h>
int main()
{
  int x;
  int y;
  int soma;
  int sub;
  int mult;
  float divi;
  
  x=5;
  y=10;
  soma=x+y;
  sub=x-y;
  mult=x*y;
  divi=(float)x/y;
  
  printf("\n A soma=%d\n",soma);
  printf("\n A subtração=%d\n",sub);
  printf("\n A multiplicação=%d\n",mult);
  printf("\n A divisão=%f\n",divi);
  
  return 0;
}