#include <stdio.h>
#include <locale.h>
 
int main(void)
{

  int v = 0;
  int *p1, *p2; // declara os apontadores para inteiro

  setlocale(LC_ALL, "Portuguese"); 
  printf("\n>> PONTEIROS\n");

  printf("\nDigite um numero: ");
  scanf("%d%*c", &v);
  printf("Valor %d armazenado (v = %d).", v, v);

  getchar();
  p1 = &v;
  p2 = p1;

  printf("\nOPERACAO: p1 = &v;\n");
  printf(" *p1: %d\n", *p1); // conteudo e coteudo/valor
  printf(" &p1: %d\n", &p1); // conteudo e endereco

  printf("\nOPERACAO: p2 = p1;\n");
  printf(" *p2: %d\n", *p2); // conteudo e coteudo/valor
  printf(" &p2: %d\n", &p2); // conteudo e endereco

  printf("\nEndereço de 'v': %d\n", p1);

  printf("\nPressione ENTER para sair\n");
  getchar();
  return 0;
}
