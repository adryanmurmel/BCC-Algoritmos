#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(void)
{
  int soma, sub, mult, divide;
  int num1, num2, sel;
  int result;
  int loop = 1;

  setlocale(LC_ALL, "Portuguese");

  while (loop == 1)
  {
    printf("//////////////CALCULADORA//////////////\n");
    printf("Menu de operacoes:\n");
    printf("1- SOMA\n2- SUBTRACAO\n3- MULTIPLICACAO\n4- DIVIDIR\n5-SAIR");
    printf("\nInsira primeiro numero inteiros:\n");
    scanf("%d", &num1);
    printf("Insira segundo numero inteiros:\n");
    scanf("%d", &num2);
    printf("\nSelecione a operacao: \n");
    scanf("%d", &sel);

    switch (sel)
    {
    case 1:
      result = num1 + num2;
      printf("\nA soma eh: %d", result);
      break;
    case 2:
      result = num1 - num2;
      printf("\nA subtracao eh: %d\n", result);
      break;
    case 3:
      result = num1 * num2;
      printf("\nA multiplicacao eh: %d\n", result);
      break;
    case 4:
      result = num1 / num2;
      printf("\nA multiplicacao eh: %d\n", result);
      break;
    case 5:
      loop = 0;
      result = 0;
      printf("\nA calculadora sera encerrada!\n");
      break;
    default:
      result = 0;
      printf("\nNenhuma operacao foi realizada");
    }
    printf("\nPressione ENTER para continuar!");
    getchar();
  }
  return 0;
}