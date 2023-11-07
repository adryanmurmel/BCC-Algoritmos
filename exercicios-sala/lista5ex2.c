/*Escrever um programa que gera os números de 1000 a 1999 e escrever aqueles que divididos por
11 onde o resto da divisão é igual a 5.*/

#include <stdio.h>

int main()
{
  for (int num = 1000; num <= 1999; num++)
  {
    if (num % 11 == 5)
      printf("%d eh divisivel por 11 com resto 5.\n", num);
  }
}