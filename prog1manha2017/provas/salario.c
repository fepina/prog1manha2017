#include <stdio.h>
int main()
{
  float salario[1800],soma,media,qtd=0;
  int i;
  
  for(i=0;i<1800;i++)
  {
    printf("\nEntre com o salario do func %d: ", i+1);
    scanf("%f",&salario[i]);
    soma=soma+salario[i];
  }
  media=soma/1800;
  
  for(i=0;i<1800;i++)
  {
    if(salario[i]>media)
      qtd++;
  }
  
  qtd=(qtd/1800)*100;
  printf("\n média salarial :%.2f:",media);
  printf("\n Ganham acima da média salarial : %.2f %",qtd); 
  
return 0;
}