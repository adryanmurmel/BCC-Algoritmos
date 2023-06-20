#include <stdio.h>
#include <locale.h>

int main(void) 
{
  setlocale(LC_ALL, "Portuguese");

  int VetorInt[5];

  printf("\n\n>> VETOR DE INTEIROS: \n   tamanho 5\n");

  printf("\nPreencha o vetor: \n");
  for (int i = 0; i < 5; i++)
  {
    printf("Digite o %d numero: ", i + 1);
    scanf("%d%*c", &VetorInt[i]);
  }

  printf("\nO vetor de INTEIROS e: \n");
  printf("| ");
  for (int i = 0; i < 5; i++)
  {
    printf("%d | ", VetorInt[i]);
  }

  printf("\n\nPressione ENTER para sair\n");
  getchar();

  return 0;
}