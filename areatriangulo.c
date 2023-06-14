// PROBLEMA - Área do triangulo

#include <stdio.h>

int main(void)
{

  float base, altura, area;

  printf("Digite o valor da base do triangulo: ");
  scanf("\n%f", &base);
  printf("Digite o valor da altura do triangulo: ");
  scanf("\n%f", &altura);

  area = (base * altura) / 2;

  printf("\nArea = %.2f\n", area);
}