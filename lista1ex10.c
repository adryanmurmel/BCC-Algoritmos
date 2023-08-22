/*Faça um programa para ler um valor (que represente o lado de um quadrado)
 * calcular e mostrar a respectiva área do quadrado.*/

#include <stdio.h>

int main(void) {
  int lado, area;

  printf("Insira o valor do lado do quadrado: \n");
  scanf("%d", &lado);

  area = lado * lado; // lado **2; ou sqr(lado);

  printf("A area do quadrado eh: %d", area);

  return 0;
}
