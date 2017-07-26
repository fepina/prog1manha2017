#include <stdio.h>
int main()
{
  int idade;
  printf("\nEntre com sua idade: ");
  scanf("%d",&idade);
  if(idade<16)
    printf("\nNão pode votar");
  else if ((idade==16)||(idade==17)||(idade>70))
    printf("\nVoto facultativo");
  else if(x(idade>=18)&&(idade<=70))
    printf(\n"Voto orbrigatorio");
  
  return 0;
}