/*A função main em um programa em C
serve como um ponto de partida para a execução do programa.
A função main pode receber parâmetros.
Pesquise quais parâmetros a função pode ter.
Faça um exemplo demonstrado o seu funcionamento.
Salve o arquivo fonte .c como exercício2.c*/

#include <stdio.h>
#include <stdlib.h>
/*argc indica o número de argumentos de linha de comando, mais 1.
Este mais 1 está ali porque o nome do próprio programa é levado em conta também*/
/*argv recebe os parametros que sao passados na linha de comando*/

int main(int argc, char **argv) // argv eh um vetor de string
{
  int i;

  for (i = 0; i < argc; i++)
    printf("%s\n", argv[i]); // o programa vai imprimir as letras que o usuario inserir
}