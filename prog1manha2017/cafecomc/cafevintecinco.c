#include <stdio.h>
int main ()
{//25. O que será impresso na tela do seguinte programa:
 int x = 0, y = 1;
 if (x || !y)
  printf("1");
 else if (y && x)
  printf("2");
 else
  printf("3");
  return 0;
 
}