/*Escrever um programa para ler 4 valores, calcular e mostrar a média ponderada obtida por um aluno para 2 notas bimestrais. Note que desses 4 valores lidos tem-se o seguinte: duas notas e os dois respectivos pesos das notas (pesquise a fórmula da média ponderada).*/

#include <stdio.h>

int main(void) {

  int peso1, peso2;
  float nota1, nota2, nota3, nota4, media;
  
  printf("Insira as quatro notas: \n");
  scanf("%f %f %f %f",&nota1, &nota2, &nota3, &nota4);

  printf("Insira o peso 1: ");
  scanf("%d", &peso1);
  printf("Insira o peso 2: ");
  scanf("%d", &peso2);

  media = (nota1*peso1 + nota2*peso2)/(peso1+peso2);

  printf("A media foi: %.1f", media);
  
  return 0;
}