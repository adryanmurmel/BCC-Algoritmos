// TRABALHO 01 DE ADRYAN E BRENO.
/*Crie um programa que leia dois vetores de caracteres:
VET_A e VET_B e junte o conteúdo do VET_B no VET_A.
Implemente uma função para descobrir o tamanho da string.
Esta função deverá retornar o tamanho*/

#include <stdio.h> 
#include <string.h>
#include <stdlib.h>

#define TAM 60

int TAMANHO_STRING(char VET[TAM])
{
  int T_STRING;

  for (T_STRING = 0; VET[T_STRING] != '\0'; T_STRING++)
  {
  }
  return T_STRING;
}

void JUNTA_STRING(int AUX, int T_String1, int T_String2, char VET_A[TAM], char VET_B[TAM])
{
  {
    // Adiciona um espaço entre as duas strings
    strcat(VET_A, " ");
    strcat(VET_A, VET_B);

    printf("\nA JUNCAO DAS STRINGS 1 E 2 E: %s", VET_A);
  }
}

int main()
{
  int T_String1, T_String2, AUX;
  char VET_A[TAM], VET_B[TAM];

  printf("DIGITE A STRING 1: ");
  gets(VET_A);
  printf("\nDIGITE A STRING 2: ");
  gets(VET_B);

  // Recebendo o tamanho da string 1 e da string 2;
  T_String1 = TAMANHO_STRING(VET_A);
  T_String2 = TAMANHO_STRING(VET_B);

  AUX = AUX + (T_String1 + T_String2);

  JUNTA_STRING(AUX, T_String1, T_String2, VET_A, VET_B);

  return 0;
  system("pause");
}