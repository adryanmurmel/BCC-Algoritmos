//div é resultado inteiro de uma divisao (/)
//Mod é Valor restante de uma divisao inteira(%)

#include <stdio.h>

int main(void) { 
  int valor1, valor2, resp_div, resp_mod, resultado;

  printf("Insira o primeiro numero: ");
  scanf("%d", &valor1);
  printf("\nInsira o segundo numero: ");
  scanf("%d", &valor2);

  resp_div = valor1 / valor2;
  resp_mod = valor1 % valor2;

  printf("%d DIV %d = %d\n", valor1, valor2, resp_div);
  printf("%d MOD %d = %d\n", valor1, valor2, resp_mod);
  
  return 0;
}