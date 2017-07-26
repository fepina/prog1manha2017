#include <stdio.h>

int main()
{
    float largura, cumprimento, area;
    printf("Digite a largura do lote:\n");
    scanf("%f", &largura);
    printf("Digite o cumprimento do lote:\n");
    scanf("%f", &cumprimento);
    area = largura*cumprimento; //Poderia ser calculado dentro da função printf. 
    printf("A area do lote = %.2f\n", area);
    return 0;

}//18)Faça um programa em C para ler 2 lados de um retângulo e calcular a área. A = b x h
  