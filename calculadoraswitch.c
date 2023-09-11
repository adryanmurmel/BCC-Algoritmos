#include <stdio.h>
#include <stdlib.h>

int main()
{
  char opcao;
  int n1, n2;

  printf("Insira o primeiro numero: ");
  scanf("%d", &n1);
  printf("Insira o segundo numero: ");
  scanf("%d", &n2);

  printf("Escolha a operacao: +, -, *, /: ");
  fflush(stdin);
  scanf("%c", &opcao);

  switch (opcao)
  {
  case '+':
    printf("O resultado de %d + %d: %d", n1, n2, n1 + n2);
    break;

  case '-':
    printf("O resultado de %d - %d: %d", n1, n2, n1 - n2);
    break;

  case '*':
    printf("O resultado de %d * %d: %d", n1, n2, n1 * n2);
    break;

  case '/':
    printf("O resultado de %d / %d: %d", n1, n2, n1 / n2);
    break;

  default:
    printf("Operacao invalida!");
  }
}