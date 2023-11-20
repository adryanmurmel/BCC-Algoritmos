#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 1000

int CONT = 0;

struct REG_AGENDA
{
  char NOME[20];
  int FONE, FLAG;
} CONTATO[TAM];

int CONSULTA_POSICAO_LIVRE()
{
  int I;
  for (I = 0; I < TAM; I++)
  {
    if (CONTATO[I].FLAG == 0)
      return I; // posicao livre
  }
}
//-----------------------------
void CADASTRAR()
{
  int POSICAO;
  POSICAO = CONSULTA_POSICAO_LIVRE();
  printf("\nPosicao do registro %d\n", POSICAO);
  printf("Digite o nome\n");
  fflush(stdin);
  gets(CONTATO[POSICAO].NOME);
  printf("Digite o telefone\n");
  scanf("%d", &CONTATO[POSICAO].FONE);
  CONTATO[POSICAO].FLAG = 1;
  // CONT++;//
}
//-----------------------------
void LISTAR()
{
  int I;
  for (I = 0; I < TAM; I++)
  {
    if (CONTATO[I].FLAG == 1)
    {
      printf("\n---Registro %d---\n", I);
      printf("Nome %s\n", CONTATO[I].NOME);
      printf("Telefone %d\n", CONTATO[I].FONE);
    }
  }
}
//-----------------------------
void CONSULTAR()
{
  int I, ACHOU = 0;
  char NOME[30];
  printf("Digite o nome que deseja consultar\n");
  fflush(stdin);
  gets(NOME);
  for (I = 0; I < TAM; I++)
  {
    if ((strcmp(CONTATO[I].NOME, NOME) == 0) && (CONTATO[I].FLAG == 1))
    {
      printf("\n---Registro %d---\n", I);
      printf("Telefone %d\n", CONTATO[I].FONE);
      ACHOU = 1;
    }
  }
  if (ACHOU == 0)
    printf("Registro nao encontrado\n");
}
//-----------------------------
void EXCLUIR()
{
  int I, ACHOU = 0;
  char NOME[30];
  printf("Digite o nome que deseja excluir\n");
  fflush(stdin);
  gets(NOME);
  for (I = 0; I < TAM; I++)
  {
    if ((strcmp(CONTATO[I].NOME, NOME) == 0) && (CONTATO[I].FLAG == 1))
    {
      printf("\n---Registro %d---\n", I);
      printf("Nome excluido %s\n", CONTATO[I].NOME);
      ACHOU = 1;
      CONTATO[I].FLAG = 0;
    }
  }
  if (ACHOU == 0)
    printf("Registro nao encontrado\n");
}
//-----------------------------
void ALTERAR()
{
  int I, ACHOU = 0;
  char NOME[30];
  printf("Digite o nome que deseja alterar\n");
  fflush(stdin);
  gets(NOME);
  for (I = 0; I < TAM; I++)
  {
    if ((strcmp(CONTATO[I].NOME, NOME) == 0) && (CONTATO[I].FLAG == 1))
    {
      printf("\n---Registro %d---\n", I);
      printf("Digite o novo telefone\n");
      scanf("%d", &CONTATO[I].FONE);
      printf("Tefefone alterado\n");
      ACHOU = 1;
    }
  }
  if (ACHOU == 0)
    printf("Registro nao encontrado\n");
}
//-----------------------------
void INICIALIZA_FLAG()
{
  int I;
  for (I = 0; I < TAM; I++)
    CONTATO[I].FLAG = 0;
}
//-----------------------------
int main()
{
  int OP;
  INICIALIZA_FLAG();
  do
  {
    printf("\n---------------------\n");
    printf("Digite\n\t1 - Cadastrar\n\t2 - Listar\n\t3 - Consultar\n\t4 - Alterar\n\t5 - Excluir\n\t6 - Sair\n");
    scanf("%d", &OP);
    switch (OP)
    {
    case 1:
      CADASTRAR();
      break;
    case 2:
      LISTAR();
      break;
    case 3:
      CONSULTAR();
      break;
    case 4:
      ALTERAR();
      break;
    case 5:
      EXCLUIR();
      break;
    }
  } while (OP != 6);
  return 0;
}