#include <stdio.h>
int main()
{int opcao;
int fat=1;
int n;int num;
do
{ 
  (printf("\n*******\n* Funcoes matematicas\n*******\n1- Imprimir Finbonacci\n2- Imprimir Fatorial\n3- Calcular Sigma\n********\nDigite a opcao: "));
  scanf("%d",&opcao);
  switch(opcao)
  { 
    case 1:
      printf("\nFinbonacci selecionada\n");
      break;
    case 2:  
  printf("\nEntre com um numero: ");
  scanf("%d",&num);
  for (n=num;n>=1;n--)
    {fat=fat*n;}
  printf("\nO fatorial de %d é %d",num,fat);
      break;
    case 3:
      printf("\nSigma selecionada\n");
      break;
    default:
       printf("\nOpçao invalida!\n");
 }
 }while(opcao!=0);
return 0;
}

//Crie um programa em C para usar a função acima e exibir o seguinte menu.
