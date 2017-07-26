#include <stdio.h>
int main()
{
  int i;
  printf("\nTabela ASII");
  printf("\n************");
  printf("\ndecimal\t\tchar");//\t =tab
  for(i=33;i<=126;i++) 
  {
    printf("\n%d\t\t%c\n",i,i);//%c é o char da tabela, sempre usar a mesma variavel 
  }
return 0;
}