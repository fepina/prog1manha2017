#include <stdio.h>

int main()
{
  int num;
  int i;
  int tabuada;
  num=0;

  printf("\nInsira o numero");
  scanf("%d",&num);
  
  for(i=1;i<=10;i++)
    {tabuada=i*num;
    printf("%d x %d = %d\n",num, i, tabuada);
}
  return 0;
}//12. Exiba a tabuada de um número fornecido pelo usuário. Por exemplo se ele digitar o número 5, então será mostrado: