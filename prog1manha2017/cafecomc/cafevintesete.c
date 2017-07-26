#include <stdio.h>
int foo (int q) {
  int x = 1;
  return (q + x);
}
int main (){
  int x = 0;
  while (x < 3) {
printf ("%i ", x);
  x = x + foo(x);
 }
}
//O que será impresso na tela ao final da execução deste programa?
