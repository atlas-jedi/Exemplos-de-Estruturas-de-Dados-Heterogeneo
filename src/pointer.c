#include <stdio.h>

int main()
{
  int **pt2; // ponteiro para o ponteiro do tipo inteiro
  int *pt1;  // ponteiro para o tipo inteiro

  int x = 10;

  pt2 = &pt1; // pt2 recebe o endereço de pt1
  pt1 = &x;   // pt1 recebe o endereço de x

  *pt1 = 20;  // x recebe 20
  **pt2 = 50; // x recebe 50

  printf("x = %d\n", x); // x = 50
}