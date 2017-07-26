#include <stdio.h>
int main()
{
  char nome [20];
  float av1, av2, media;
  
  printf("\nQual é o seu nome:");
  scanf("%s",nome);
  printf("\nEntre com a nota da av1:");
  scanf("%f",&av1);
  printf("\nEntre com a nota da av2: ");
  scanf("%f",&av2);
  media=(av1+av2)/2;
  
  printf("\nOla %s,sua media e: %.1f",nome,media);
        
 return 0;
}