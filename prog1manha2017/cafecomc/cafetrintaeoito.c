#include <stdio.h>
int main()
{
  int c;
  float f;
  
  printf("\nInsira a temperatura em celsuis:");
  scanf("%d",&c);
  
  f=(c*1.8)+32;
  
  printf("A temperatura em e fahrenheité %.2f",f);

return 0;
}