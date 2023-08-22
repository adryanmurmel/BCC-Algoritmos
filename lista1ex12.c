/*Escreva um programa que leia dois números que deverão ser colocados, respectivamente, nas variáveis VA e VB. O programa deve, então, trocar os valores de VA por VB e vice-versa e mostrar o conteúdo destas variáveis.*/

#include <stdio.h>

int main(void) {

  int va, vb, aux;
  
  printf("Insira o valor de va: ");
  scanf("%d", &va);
  printf("\nInsira o valor de vb: ");
  scanf("%d", &vb);

  /*existe troca com mais um auxiliar tambem*/
  
  va = va + vb;
  vb = va - vb;
  va = va - vb;

  
  printf("va = %d , vb = %d", va, vb);
  
  return 0;
}