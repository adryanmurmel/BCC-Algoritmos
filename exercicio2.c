// TRABALHO 02 DE ADRYAN E BRENO.
/*O CPF é composto por onze algarismos, onde os dois últimos são chamados de dígitos
verificadores, ou seja, os dois últimos dígitos são criados a partir dos nove primeiros. O cálculo
é feito em duas etapas utilizando o módulo de divisão 11.
Para exemplificar melhor iremos calcular os dígitos verificadores de um CPF hipotético,
por exemplo, 222.333.666-XX.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int calcula_digito(char cpf[], int peso[], int tam)
{
  int soma = 0;
  for (int i = 0; i < tam; i++)
  {
    soma += (cpf[i] - '0') * peso[i];
  }

  int resto = soma % 11;
  if (resto < 2) // se o resto for menor que 2 é 0
  {
    return 0;
  }
  else
  {
    return 11 - resto;
  }
}

int valida_cpf(char cpf[])
{
  int coluna1[] = {10, 9, 8, 7, 6, 5, 4, 3, 2};
  int coluna2[] = {11, 10, 9, 8, 7, 6, 5, 4, 3, 2};

  // Remove os pontos e o traço do CPF
  char cpf_sem_formatacao[12];
  int j = 0; // Índice para o vetor sem formatação

  for (int i = 0; i < strlen(cpf); i++)
  {
    if (cpf[i] >= '0' && cpf[i] <= '9') // Verifica se o caractere é um dígito
    {
      cpf_sem_formatacao[j] = cpf[i]; // Copia o caractere
      j++;
    }
  }

  // Calcula os dígitos verificadores
  int digito1 = calcula_digito(cpf_sem_formatacao, coluna1, 9);
  int digito2 = calcula_digito(cpf_sem_formatacao, coluna2, 10);

  // Compara os dígitos calculados com os dígitos informados
  if (digito1 == cpf_sem_formatacao[9] - '0' && digito2 == cpf_sem_formatacao[10] - '0') // verificação de digito1 e digito2
  {
    return 1; // valido
  }
  else
  {
    return 0; // invalido
  }
}

int main()
{
  char cpf[15];

  printf("Digite um CPF (com pontos e traco): ");
  scanf("%s", cpf);

  if (strlen(cpf) != 14) // verifica se o CPF tem quatorze caracteres
  {
    printf("O CPF Informado e invalido. Ele deve ter quatorze caracteres.\n");
    exit(1);
  }

  if (valida_cpf(cpf))
  {
    printf("\nO CPF Informado e valido!\n");
  }
  else
  {
    printf("\nO CPF Informado e invalido!\n");
  }

  return (0);
}
