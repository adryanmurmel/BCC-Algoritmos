/*2. Tendo como dados de entrada a altura e o sexo de uma pessoa (1- masculino e 0 - feminino).
construa um programa que calcule seu peso ideal, utilizando as seguintes fórmulas:
- para homens: (72.7*6)-58
- para mulheres: (62.1°h) 44.7*/

#include <stdio.h>

int main(void) {

  float peso, pesoh, pesof;
  int sexo;
  
  printf("Insira sua altura: ");
  scanf("%f", &peso);
  printf("\nInsira 0 para feminino ou 1 para masculino: ");
  scanf("%d", &sexo);

  if (sexo == 1)
  {
    printf("Masculino\n");
    pesoh = (72.7*peso)-58;
    printf("O peso ideal eh: %f", pesoh);
  }
  else if (sexo == 0)
  {
    printf("Femino\n");
    pesof = (62.1*peso)-44.7;
    printf("O peso ideal eh: %f", pesof);
  }
  
  return 0;
}