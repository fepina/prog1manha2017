#include <stdio.h>
int main()
{//34)Crie uma função em C chamado menu. Esta função deve exibir uma lista de opções numeradas, pedir a

//entrada pelo teclado e retornar a opção selecionada;
  int opcao;
  do {printf("\nQual operacao deseja?\n1- Adição\n2- Subtracao\n3- Multiplicacao\n4- Divisao\n0- Sair\nOpcçao:");
 scanf("%d",&opcao);
 switch (opcao)
 {
      case 1:
      printf("\nAdicao selecionada\n");
      break;
     case 2:
      printf("\nSubtracao selecionada\n");
      break;
     case 3:
      printf("\nMultiplicacao selecionada\n");
      break;
     case 4:
      printf("\ndivisao selecionada\n");
      break;
     case 5:
      printf("\nSair\n");
      break;
      default:
       printf("\nOpçao invalida!\n");
 }
 }while(opcao!=0);
  return 0;
}