#include <stdio.h>

int main()
{  
  char voto;
  int tvotos;
  int c1;
  int c2;
  char continua;
  float pc1;
  float pc2;
  
  c1=0;
  c2=0;

  do {
    printf("Insira o voto, c1 para candidato 1 e c2 para canddidato 2");
    scanf("%c",&voto);
    tvotos=tvotos++;
    if (voto==c1)
      c1=c1+1;
    if (voto==c2)
      c2=c2+1;
      
    printf("\nDeseja continuar (s/n)?");
    scanf("%c",&continua);
  }while (continua=="s");
 
  pc1=(c1/tvotos)*100;
  pc2=(c2/tvotos)*100;
  
  printf("Candidadto 1:%.2f%",pc1);
  printf("Candidadto 2:%.2f%",pc2);
  
  return 0;
}



//Faça um programa em C par ler e contabilizar os votos de 2 candidatos: Canditado 1 e

//Candidato 2. Após a leitura do voto, deve-se perguntar se deseja continuar(s/n) . O programa

//só termina quando o usuário não desejar mais continuar. Ao final, o programa deve informar

//a percentagem de votos do candidato 1 e candidato 2.