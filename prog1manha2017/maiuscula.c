#include <stdio.h>
int main()
{
  char letra;
  printf("\nInserir um caracter: ");
  scanf("%c",&letra);
 
  if((letra>=65)&&(letra<=90))
  {
    printf("\nMaiuscula");
    printf("\nConvertida para minuscula %c\n",letra+32);
  }
  else if((letra>=97)&&(letra<=122))
  {
    printf("\nMinuscula");
    printf("\nConvertida para maiuscula %c\n",letra-32);//A constante para converter minuscula/maiuscula sempre será 32
  }
   else if((letra>=48)&&(letra<=57))
    printf("\nNúmero\n");
  
  return 0;

}