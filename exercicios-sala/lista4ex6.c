#include <stdio.h>
#include <stdlib.h>

int main()
{
  int OPCAO;
  printf("Digite 1 para mamifero ou 2 para aves\n");
  scanf("%d", &OPCAO);
  switch (OPCAO)
  {
  case 1: // mamifero
  {
    printf("Digite 1 para quadrupede ou 2 para bipede\n");
    scanf("%d", &OPCAO);
    switch (OPCAO)
    {
    case 1: // quadrupede
    {
      printf("Digite 1 para carnivoro ou 2 para herbivoro\n");
      scanf("%d", &OPCAO);
      switch (OPCAO)
      {
      case 1: // carnivoro
      {
        printf("Leao\n");
        break;
      }
      case 2: // herbivoro
      {
        printf("cavalo\n");
        break;
      }
      default:
        printf("Opcao invalida\n");
      }
      break;
    }
    case 2: // bipede
    {
      printf("Digite 1 para onivoro ou 2 para frutifero\n");
      scanf("%d", &OPCAO);
      switch (OPCAO)
      {
      case 1: // onivoro
      {
        printf("Homem\n");
        break;
      }
      case 2: // frutifero
      {
        printf("Macaco\n");
        break;
      }
      default:
        printf("Opcao invalida\n");
      }
      break;
    }
    default:
      printf("Opcao invalida");
    }
    break;
  }
  case 2: // aves
  {
    printf("Digite 1 para nao voadora ou 2 para nadadora\n");
    scanf("%d", &OPCAO);
    switch (OPCAO)
    {
    case 1: // nao voadora
    {
      printf("Digite 1 para tropical ou 2 para polar\n");
      scanf("%d", &OPCAO);
      switch (OPCAO)
      {
      case 1: // tropical
      {
        printf("Avestruz\n");
        break;
      }
      case 2: // polar
      {
        printf("Pinguim\n");
        break;
      }
      default:
        printf("Opcao invalida\n");
      }
      break;
    }
    case 2: // nadadora
    {
      printf("Pato\n");
      break;
    }
    default:
      printf("Opcao invalida\n");
    }
    break;
  }
  default:
    printf("Opcao invalida\n");
  }
  system("pause");
  return 0;
}
