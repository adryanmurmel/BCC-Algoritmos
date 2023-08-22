/*1. Escrever um programa para ler e imprimir três números. Se o primeiro for positivo, imprimir sua raiz quadrada, caso contrário, imprimir o seu quadrado; se o segundo número for maior que 10 e menor que 100, imprimir a mensagem: "Número está entre 10 e 100 - intervalo permitido"; se o terceiro número for menor que o segundo, calcular e imprimir a diferença entre eles, caso contrário, imprimir o terceiro múmero adicionado de l.*/

#include <stdio.h>
#include <math.h>

int main(void) {

  int num1,num2,num3, resultado;
  
  printf("Insira 3 numeros: ");
  scanf("%d %d %d", &num1, &num2, &num3);

  if (num1>0)
  {
    resultado = sqrt(num1);
    printf("A raiz quadrada de %d eh: %d",num1, resultado);
  }
  else
  {
    resultado = sqrt();
    printf("O quadrado de %d eh: %d", num1, resultado);
  }

  if ((num2>10)=(num2<100))
  {
    printf("Numero %d, esta entre 10 e 100-intervalo permitido", num2);
  }
  if(num3<num2)
  {
    printf("A diferenca foi: %d", num2-num3);
  }
  return 0;
}