#include <stdio.h>
int main()
//declarar variaveis 
{
int num,menorn,maiorn,resp;
  maiorn=0;
  menorn=1000;
  
  do
  {
    printf("\n Entre com um numero de 0 a 100: ");
    scanf ("%d",&num);
    
    if(num>maiorn)
      maiorn=num;
    if(num<maiorn)
      menorn=num;
    
    printf("\n Deseja continuar (1-s/2-n): ");
    scanf("%d", &resp);
  }while(resp==1);
  
  printf("\n Maior numero:%d",maiorn);
  printf("\nMenor numero:%d",menorn);
return 0;  
}