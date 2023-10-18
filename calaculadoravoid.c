#include <stdio.h>
#include <stdlib.h>

//-------------------------------------------------
void SOMAR(float n1, float n2) 
{
  printf("%lf + %lf = %.2lf\n", n1, n2, n1 + n2);
}
//-------------------------------------------------
void SUB(float n1, float n2)
{
  printf("%lf - %lf = %.2lf\n", n1, n2, n1 - n2);
}
//-------------------------------------------------
void MULTIPLICA(float n1, float n2)
{
  printf("%lf * %lf = %.2lf\n", n1, n2, n1 * n2);
}
//-------------------------------------------------
void DIVIDE(float n1, float n2)
{
  printf("%lf / %lf = %.2lf\n", n1, n2, n1 / n2);
}
//-------------------------------------------------

int main(void)
{
  char opcao;
  double num1, num2;

  printf("Insira o primeiro numero: ");
  scanf("%lf", &num1);
  printf("Insira o segundo numero: ");
  scanf("%lf\n", &num2);

  printf("Escolha a operacao: +, -, *, /: ");

  scanf("%c\n", &opcao);

  switch (opcao)
  {
  case '+':
    SOMAR(num1, num2);
    break;

  case '-':
    SUB(num1, num2);
    break;

  case '*':
    MULTIPLICA(num1, num2);
    break;
  case '/':
    DIVIDE(num1, num2);
    break;

  default:
    printf("Operacao invalida!");
  }
}