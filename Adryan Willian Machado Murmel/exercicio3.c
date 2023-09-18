/*A Linguagem de Programação C tem quatro comandos que realizam
um desvio incondicional: return, goto, break (exceto no switch) e continue e a função exit.
Pesquise sobre cada uma delas e implemente um exemplo demostrando o funcionamento
de cada comando/função.
Siga rigorosamente as instruções descritas abaixo:
1. Implemente os exemplos de funcionamento dos comandos/função em um único
arquivo fonte.
2. Crie uma função em C para exemplificar cada comando/função. O programa
principal deverá ter um menu apresentando as 6 opções: 1 - exemplo comando
break, 2 - exemplo comando continue, 3 - exemplo comando return, 4 - exemplo
comando goto, 5 – exemplo função exit e 6 – sair, a qual deverá ser executada
conforme a opção do usuário.
3. Salve o arquivo .c como exercício3.*/

#include <stdio.h>
#include <stdlib.h>

int tipo_return()
{
  int a = 3, b = 2, c = 4;
  int resultado = (a + b) * c;
  printf("Resultado = %d\n", resultado);
  return resultado;
}
void tipo_goto()
{
  goto ponto;

  printf("Por causa do comando goto essa frase sera pulada!");

ponto:

  printf("Dessa linha para baixo sera impresso!");
}
void tipo_break()
{
  int num;

  for (num = 0; num < 10; num++)
  {
    if (num == 5)
    {
      break;
    }
  }
  printf("O comando break parou a contagem do for que ia ate 10 no: %d", num);
}
void tipo_continue()
{
  int S = 0;
  int i = 1;

  while (i <= 100)
  {
    i++;
    if (i % 5 == 0)
    {
      S += i;
      continue; // O comando "continue" é utilizado para pular para a próxima iteração do loop, sem executar o restante das instruções no corpo do loop
    }
  }
}
void tipo_exit()
{
  printf("Funcao exit. Neste ponto, o programa termina.\n");
  exit(0);
}

int main()
{
  int comando;

  printf("Menu:\n1-comando return\n2-comando goto\n3-comando break\n4-comando continue\n5-comando exit");
  printf("\nEscolha um numero: ");
  scanf("%d", &comando);

  switch (comando)
  {
  case 1:
    tipo_return();
    break;
  case 2:
    tipo_goto();
    break;
  case 3:
    tipo_break();
    break;
  case 4:
    tipo_continue();
    break;
  case 5:
    tipo_exit();
    break;
  default:
    printf("Comando inexistente!\n");
  }
}
