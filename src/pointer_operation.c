#include <stdio.h>

int main()
{
  int arr[] = {1, 2, 3, 4, 5};
  int *ptr = arr; // Aponta para o primeiro elemento do array

  // Incrementa o ponteiro para acessar os elementos subsequentes do array
  for (int i = 0; i < 5; i++)
  {
    printf("%d ", *ptr);
    ptr++; // Incrementa o ponteiro
  }

  return 0;
}