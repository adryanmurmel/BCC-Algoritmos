#include <stdio.h>

int main()
{
  char estado;

  printf("Insira a letra de acordo com seu estado civil: S-solteiro, C-casado, V-viuvo, D-divorciado, E-desquitado: ");
  scanf("%c\n", &estado);

  switch (estado)
  {
  case 's':
    printf("Solteiro!");
    break;

  case 'c':
    printf("Casado!");
    break;

  case 'v':
    printf("Viuvo!");
    break;

  case 'd':
    printf("Divorciado!");
    break;

  case 'e':
    printf("Desquitado");
    break;

  default:
    printf("Opcao invalida!");
    break;
  }
}