#include <stdio.h>
int main()
{
  int idade;
  
  printf("Insira a sua idade:");
  scanf("%d",&idade);
  
  if (idade <= 15)
  {
    printf("\nNao pode votar");
  }
 else if (idade==16)||(idade==17)||(idade>=70)
  {
    printf("\n Voto facultativo");
  }
  else if (idade>=18)&&(idade<=69)
  {
    printf("\n Voto obrigatorio");
  }
  
 return 0;
}

//A partir da idade informada de um cidadão, diga se ele não pode votar (idade inferior a 16),
//ou se o voto é facultativo (idade igual a 16 ou 17 ou ainda maior do que 70), 
//ou ainda se o voto é obrigatório para idades entre 18 e 70 (incluindo estes valores)//