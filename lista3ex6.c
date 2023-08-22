/*Faça um programa que leia um número inteiro e mostre uma mensagem indicando se este número e par ou impar, e se é positivo ou negativo.*/

#include <stdio.h>

int main(void) {

  int num;
  
  printf("Insira um numero: ");
  scanf("%d",&num);

  if (num % 2 == 0)
  {
    printf("Numero par!");
  }
  else {
    printf("Numero impar!");
  }

  if (num>=1)
  {
    printf("\nPositivo!");
  }
  else if(num<0)
    {
    printf("\nNegativo!");
    }
  if (num == 0)
  {
    printf("Neutro!");
  }
    
  return 0;
}