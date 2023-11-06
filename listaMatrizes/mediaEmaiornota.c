/*descobrir a media de notas de dois alunos usando uma matriz 2x5
e descobrir a maior nota etre os dois alunos*/
#define alunos 2
#define notas 5
#include <stdio.h>

float encontrarMaiorNota(float media[alunos][notas])
{
  float maior = media[0][0]; // atribui a primeira nota como a maior

  for (int i = 0; i < alunos; i++)
  {
    for (int j = 0; j < notas; j++)
    {
      if (media[i][j] > maior)
      {
        maior = media[i][j]; // se a nota atual for maior que a maior nota anterior, atualiza
      }
    }
  }

  return maior;
}

int main()
{
  float media[alunos][notas];
  float soma;

  for (int i = 0; i < alunos; i++)
  {
    for (int j = 0; j < notas; j++)
    {
      printf("Digite a nota [%d][%d]: ", i + 1, j + 1);
      scanf("%f", &media[i][j]);
    }
  }

  for (int i = 0; i < alunos; i++)
  {
    soma = 0;
    for (int j = 0; j < notas; j++)
    {
      soma += media[i][j];
    }
    printf("\nA media do aluno %d eh %.2f", i + 1, soma / notas);
  }

  float maiorNota = encontrarMaiorNota(media);
  printf("\nA maior nota entre os dois alunos eh %.2f", maiorNota);

  return 0;
}