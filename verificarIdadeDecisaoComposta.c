/*3. Faça um algoritmo que leia a idade de uma pessoa e verifique se ela é:
- Criança: Idade de 1 a 13 anos:
- Adolescente: Idade maior que 13 anos e menor ou igual a 20 anos;
- Adulto: Idade maior que 20 e menor ou igual a 50 anos;
- Idosa idade maior que 50 anos.
Exiba em qual grupo a pessoa se enquadra.*/


#include <stdio.h>

int main(void) {

  int idade;
  
  printf("Insira sua idade: ");
  scanf("%d", &idade);
  
  if (idade>=1 && idade<=13)
  {
    printf("Crianca!");
  }
  else if(idade>13&& idade<=20)
  {
    printf("Adolescente!");
  }
  
  if (idade>20 && idade<=50)
  {
    printf("Adulto!");
  }
  
  else if(idade>50 && idade<=130)
  {
    printf("Idosa!");
  }
    
  else
  printf("Valor invalido!");
  
  return 0;
}