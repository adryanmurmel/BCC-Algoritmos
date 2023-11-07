/*Escrever um programa que leia 8 valores inteiro positivo, um de cada vez, e encontre e escreve o
maior deles.*/

#include <stdio.h>

int main()
{
  int maior = 0, i;

  printf("Insira 8 valores positivos: ");

  for (i = 0; i < 8; i++)
  {
    int num;
    scanf("%d", &num);
    if (num > maior)
    {
      maior = num;
    }
  }
  printf("O maior numero entre os 8 eh: %d", maior);
}