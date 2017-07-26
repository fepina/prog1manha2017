#include <stdio.h>
int main()
{
  float salario;
  float desconto;
  float sl;
  
  printf("Insira o salario:\n");
  scanf("%f",&salario);
  
 desconto=80/100;
   
 sl=salario*desconto;
  
  printf("O salário liquido é: %f \n",salario);
    
 return 0;
}