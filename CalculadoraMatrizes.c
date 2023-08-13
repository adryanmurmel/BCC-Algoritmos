#define colunas 2
#define linhas 2
 
#include <stdio.h> 
#include <locale.h>
 
int main(void) 
{
  setlocale(LC_ALL, "Portuguese"); 
   
  int matriz1[linhas][colunas]; 
  int matriz2[linhas][colunas]; 
  int matrizSoma[linhas][colunas];
  int matrizSub[linhas][colunas];
  int matrizMult[linhas][colunas];
  int matrizTrans[linhas][colunas];
  
  int loop = 1;
  int Sel;
 
  printf("\n\nMATRIZ DE INTEIROS: tamanho %d x %d\n", linhas, colunas);

  printf("\nPreencha a matriz 1:\n"); // para preencher a matriz 1
  for (int i = 0; i < linhas; i++)    // para percorrer linhas
  {
    for (int j = 0; j < colunas; j++) // para percorrer colunas
    {
      printf("Digite o numero [%d,%d]:", i + 1, j + 1); // imprimir
      scanf("%d%*c", &matriz1[i][j]);
    }
  } 
  printf("\nPreencha a matriz 2:\n"); // para preencher o valor da matriz 2
  for (int i = 0; i < linhas; i++){
    for (int j = 0; j < colunas; j++)
    {
      printf("Digite o numero [%d,%d]:", i + 1, j + 1);
      scanf("%d%*c", &matriz2[i][j]);
    }
  }
  printf("\nA matriz (1) eh:\n");
  for (int i = 0; i < linhas; i++)
  {
    printf("|");
    for (int j = 0; j < colunas; j++)
    {
      printf("%d|", matriz1[i][j]);
    }
    printf("\n");
  }
  printf("\nA matriz (2) eh:\n");
  for (int i = 0; i < linhas; i++)
  {
    printf("|");
    for (int j = 0; j < colunas; j++)
    {
      printf("%d|", matriz2[i][j]);
    }
    printf("\n");
  }
  printf("\n\nPressiona ENTER para continuar\n\n");
  getchar();

  while (loop == 1)
  {

    int matrizAux; // aux da mult

    printf("\n////////////////CALCULADORA////////////////\n");
    printf("Menu de operacoes:\n");
    printf("1 - SOMA\n2 - SUBTRACAO\n 3 - MULTIPLICACAO \n4 - TRANSPOSTA\n 5 - SAIR");
    printf("\nSelecione o numero de acordo com o menu de operacoes:");
    scanf("%d%*c", &Sel);

    switch (Sel)
    {
    case 1:
      for (int i = 0; i < linhas; i++)
      {
        for (int j = 0; j < colunas; j++)
        {
          matrizSoma[i][j] = matriz1[i][j] + matriz2[i][j];
        }
      }
      printf("\nA matriz Soma eh:\n");
      for (int i = 0; i < linhas; i++)
      {
        printf("|");
        for (int j = 0; j < colunas; j++)
        {
          printf("%d|", matrizSoma[i][j]);
        }
        printf("\n");
      }
      break;

    case 2:
      for (int i = 0; i < linhas; i++)
      {
        for (int j = 0; j < colunas; j++)
        {
          matrizSub[i][j] = matriz1[i][j] - matriz2[i][j];
        }
      }
      printf("\nA matriz Subtração eh:\n");
      for (int i = 0; i < linhas; i++)
      {
        printf("|");
        for (int j = 0; j < colunas; j++)
        {
          printf("%d|", matrizSub[i][j]);
        }
        printf("\n");
      }
      break;

    case 3:
      for (int i = 0; i < linhas; i++)
      {
        for (int j = 0; j < colunas; j++)
        {
          for (int k = 0; k < colunas; k++)
          {
            matrizAux = matrizAux + (matriz1[i][k] * matriz2[k][j]);
          }
          matrizMult[i][j] = matrizAux;
          matrizAux = 0;
        }
      }
      printf("\nA matriz Multiplicação eh:\n");
      for (int i = 0; i < linhas; i++)
      {
        printf("|");
        for (int j = 0; j < colunas; j++)
        {
          printf("%d|", matrizMult[i][j]);
        }
        printf("\n");
      }
      break;

    case 4:
      for (int i = 0; i < linhas; i++)
      {
        for (int j = 0; j < colunas; j++)
        {
          matrizTrans[i][j] = matriz1[j][i];
        }
      }
      printf("\nA matriz (1) transposta eh:\n");
      for (int i = 0; i < linhas; i++)
      {
        printf("|");
        for (int j = 0; j < colunas; j++)
        {
          printf("%d|", matrizTrans[i][j]);
        }
        printf("\n");
      }
      break;

    case 5:
      loop = 0;
      printf("A calculadora sera encerrada!");
      break;
    default:
      printf("Nenhuma operação foi realizada!\n");
    }
    printf("Pressione ENTER para continuar!");
    getchar();
  }
  printf("\n\nPressione ENTER para sair");
  getchar();

  return 0;
}
