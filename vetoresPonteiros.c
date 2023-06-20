#include <stdio.h> 
#include <locale.h>
 
int main(void)
{

  int *p;                     // ponteiro de inteiro p
  int a[5] = {0, 2, 4, 6, 8}; // vetor de tamanho

  setlocale(LC_ALL, "Portuguese");
  printf("\n>> PONTEIRO E VETOR\n");

  printf("\n>> Imprime o vetor INICIAL pelo incremento do ponteiro:\n");
  p = &a[0];
  for (int i = 0; i < 5; i++)
  {
    printf("a[%d]=%d\n", i, *p);
    p++;
  }

  p = &a[0];
  printf("\n>> Preencha o NOVO vetor por referencia pelo ponteiro: \n");
  for (int i = 0; i < 5; i++)
  {
    printf("Digite o numero a[%d]: ", i);
    scanf("%d%*c", p);
    p++;
  }

  printf("\n>> Imprime o NOVO vetor pelo incremento do ponteiro:\n");
  // p = &a[0]; poderia ser p=a (significado primeira posicao da array)
  p = a;
  for (int i = 0; i < 5; i++)
  {
    printf("a[%d]=%d\n", i, *p);
    p++;
  }

  printf("\nPressione ENTER para sair\n");
  getchar();
  return 0;
}