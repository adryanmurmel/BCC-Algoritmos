#include <stdio.h>

int main(void)
{

  float salarioFixo, vendasNoMes, comissao;
  float total;

  printf("Insira o salario fixo: ");
  scanf("%f", &salarioFixo);
  printf("Insira o total de vendas: ");
  scanf("%f", &vendasNoMes);

  total = ((15.0 / 100.0) * vendasNoMes) + salarioFixo;

  printf("O total é de = %.2f reais", total);
}