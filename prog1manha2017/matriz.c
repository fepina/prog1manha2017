#include <stdio.h>
int main()
{
  int i,j,mat;
  float notas[4][3],media;
  
  for(i=0;i<=3;i++)
{
  for (j=0;j<=2;j++)
  {
    printf("\n Entre com a av%d do aluno %d" ,j+1,i+1);
    scanf("%f",&notas[i][j]);
  }
  printf("\n");
}

printf("\nNotas da av1");
for(i=0;i<=3;i++)
{
printf("\n Aluno %d - %.2f",i+1,notas[i][0]);
}
printf("\n Entre com a matricula[1,4]]:");
scanf("%d",&mat);
i=mat-1;

media=(notas[i][0]+notas[i][1]+notas[i][2])/3;
printf("\n Notas do aluno",mat);
for(j=0;j<=2;j++)
{printf("\n av%d=%.2f",j+1,notas[i][j]);
}
printf("\nMedia final =%.2f",media);
  return 0;

}