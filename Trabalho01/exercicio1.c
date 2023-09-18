/*Os tipos de dados básicos em C podem estar acompanhados
por modificadores na declaração de variáveis.
Tais modificadores são: long, short, signed e unsigned.
Faça um programa em C que imprima o tamanho em memória que cada tipo
de dado ocupa (tipo de dados e quando usado com os modificadores).
Salve o arquivo fonte .c como exercício1.c.*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
  // imprimindo tamanho de memoria dos modificadores

  printf("Tamanho de memoria do long eh: %d\n", sizeof(long));
  printf("Tamanho de memoria do short eh: %d\n", sizeof(short));
  printf("Tamanho de memoria do signed eh: %d\n", sizeof(signed));
  printf("Tamanho de memoria do unsigned eh: %d\n", sizeof(unsigned));
  printf("----------------------------------------------\n");

  // tipo de dados e quando usado com os modificadores

  printf("Tamanho de memoria do int eh: %d\n", sizeof(int));
  printf("Tamanho de memoria do long int eh: %d\n", sizeof(long int));
  printf("Tamanho de memoria do short int eh: %d\n", sizeof(short int));
  printf("Tamanho de memoria do signed int eh: %d\n", sizeof(signed int));
  printf("Tamanho de memoria do unsigned int eh: %d\n", sizeof(unsigned int));
  printf("----------------------------------------------\n");
  printf("Tamanho de memoria do float eh: %d\n", sizeof(float));
  // deu erro em usar outros modificadores no float
  printf("----------------------------------------------\n");
  printf("Tamanho de memoria do double eh: %d\n", sizeof(double));
  printf("Tamanho de memoria do long double eh: %d\n", sizeof(long double));
  printf("----------------------------------------------\n");
  printf("Tamanho de memoria do char eh: %d\n", sizeof(char));
  printf("Tamanho de memoria do signed char eh: %d\n", sizeof(signed char));
  printf("Tamanho de memoria do unsigned char eh: %d\n", sizeof(unsigned char));
}