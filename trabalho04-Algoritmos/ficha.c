#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FUNCIONARIOS 50
#define MESES 12

typedef struct
{
  char nome[50];
  char cargo[50];
  int codigo;
  int ano;
  int dias_trabalhados[MESES];
  int horas_trabalhadas[MESES];
} ficha;

typedef struct
{
  ficha funcionarios[FUNCIONARIOS];
  int quantidade;
} RegistroFuncionarios;

RegistroFuncionarios alterarCodigo(RegistroFuncionarios registro);
RegistroFuncionarios alterarCargo(RegistroFuncionarios registro);
RegistroFuncionarios alterarNome(RegistroFuncionarios registro);
RegistroFuncionarios cadastrarFuncionario(RegistroFuncionarios registro);
RegistroFuncionarios inserirHorasTrabalhadas(RegistroFuncionarios registro);
RegistroFuncionarios calcularSalario(RegistroFuncionarios registro);
RegistroFuncionarios listarFuncionarios(RegistroFuncionarios registro);
RegistroFuncionarios alterarInformacoes(RegistroFuncionarios registro);
RegistroFuncionarios excluirFuncionario(RegistroFuncionarios registro);

int main()
{
  RegistroFuncionarios registro;
  registro.quantidade = 0;

  int opcao;

  do
  {
    printf("\nEscolha uma opcao:\n\t");
    printf("1 - Cadastrar funcionario\n\t");
    printf("2 - Inserir horas trabalhadas\n\t");
    printf("3 - Calcular salario\n\t");
    printf("4 - Listar funcionarios cadastrados\n\t");
    printf("5 - Alterar informacoes do funcionario\n\t");
    printf("6 - Excluir funcionario\n\t");
    printf("0 - Sair\n\t");
    printf("-----------------------------------------");
    printf("\nOpcao: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
      registro = cadastrarFuncionario(registro);
      break;
    case 2:
      registro = inserirHorasTrabalhadas(registro);
      break;
    case 3:
      registro = calcularSalario(registro);
      break;
    case 4:
      registro = listarFuncionarios(registro);
      break;
    case 5:
      registro = alterarInformacoes(registro);
      break;
    case 6:
      registro = excluirFuncionario(registro);
      break;
    case 0:
      printf("Ficha ENCERRADA!");
      break;
    default:
      printf("Opcao invalida.");
      break;
    }
  } while (opcao != 0);

  return 0;
}

RegistroFuncionarios cadastrarFuncionario(RegistroFuncionarios registro)
{
  char nome[50], cargo[50];
  int codigo, ano;

  if (registro.quantidade == FUNCIONARIOS)
  {
    printf("Impossivel cadastrar mais funcionarios!\n");
    return registro;
  }

  printf("Insira seu CODIGO de 1 ate 50: ");
  scanf("%d", &codigo);
  fflush(stdin);

  while (verificarCodigo(registro, codigo))
  {
    printf("Codigo em uso, insira outro codigo: ");
    scanf("%d", &codigo);
    fflush(stdin);
  }

  if (codigo < 1 || codigo > 50)
  {
    printf("Codigo nao permitido!\n");
    return registro;
  }

  printf("Insira seu nome: ");
  scanf(" %[^\n]s", nome);
  fflush(stdin);

  for (int i = 0; i < registro.quantidade; i++)
  {
    if (strcmp(nome, registro.funcionarios[i].nome) == 0)
    {
      printf("Nome em uso, insira outro nome: ");
      scanf(" %[^\n]s", nome);
      fflush(stdin);
      i = -1;
    }
  }

  printf("Insira o cargo: ");
  scanf("%s", cargo);
  fflush(stdin);

  printf("Insira o ano: ");
  scanf("%d", &ano);
  fflush(stdin);

  ficha novoFuncionario;
  novoFuncionario.codigo = codigo;
  strcpy(novoFuncionario.nome, nome);
  strcpy(novoFuncionario.cargo, cargo);
  novoFuncionario.ano = ano;

  registro.funcionarios[registro.quantidade] = novoFuncionario;
  registro.quantidade++;

  printf("\nFuncionario cadastrado!\n");

  return registro;
}

RegistroFuncionarios inserirHorasTrabalhadas(RegistroFuncionarios registro)
{
  char nome[50];
  int mes, dias;
  int achou = 0;

  printf("Insira o NOME que quer procurar: ");
  scanf(" %[^\n]s", nome);

  for (int i = 0; i < registro.quantidade; i++)
  {
    if (strcmp(registro.funcionarios[i].nome, nome) == 0)
    {
      achou = 1;

      printf("--------------------------------\n1-Janeiro\n2-Fevereiro\n3-Março\n4-Abril\n5-Maio\n6-Junho\n7-Julho\n8-Agosto\n9-Setembro\nOutubro\nNovembro\nDezembro\n");
      printf("--------------------------------\nDigite o numero do mes 1 a 12: ");
      scanf("%d", &mes);
      mes--;

      if (mes >= 12 || mes < 0)
      {
        printf("Mes invalido.");
        break;
      }

      printf("\nDigite a quantidade de dias trabalhados no mes: ");
      scanf("%d", &dias);

      if (dias > 31 || dias < 0)
      {
        printf("Quantidade de dias invalido.");
        break;
      }

      registro.funcionarios[i].dias_trabalhados[mes] = dias;

      printf("Digite a quantidade de horas trabalhadas no mes: ");
      scanf("%d", &registro.funcionarios[i].horas_trabalhadas[mes]);

      printf("\nHoras trabalhadas registradas com sucesso.\n");

      break;
    }
  }

  if (!achou)
  {
    printf("\nFuncionario nao encontrado!");
  }

  return registro;
}

int verificarCodigo(RegistroFuncionarios registro, int codigo)
{
  for (int i = 0; i < registro.quantidade; i++)
  {
    if (registro.funcionarios[i].codigo == codigo)
    {
      return 1;
    }
  }
  return 0;
}

RegistroFuncionarios calcularSalario(RegistroFuncionarios registro)
{
  char nome[50];
  int mes;
  int achou = 0;

  printf("Digite o NOME do funcionario:");
  scanf(" %[^\n]s", nome);

  for (int i = 0; i < registro.quantidade; i++)
  {
    if (strcmp(registro.funcionarios[i].nome, nome) == 0)
    {
      printf("\nDigite o numero do mes 1 a 12:");
      scanf("%d", &mes);
      mes--;
      achou = 1;

      if (mes >= 12 || mes < 0)
      {
        printf("Mes invalido.");
        break;
      }

      int salario = registro.funcionarios[i].dias_trabalhados[mes] * registro.funcionarios[i].horas_trabalhadas[mes] * 10;

      printf("\nSalario de %s para o mes %d: R$%d\n", registro.funcionarios[i].nome, mes + 1, salario);

      break;
    }
  }
  if (!achou)
  {
    printf("\nFuncionario nao encontrado!");
  }
}

RegistroFuncionarios listarFuncionarios(RegistroFuncionarios registro)
{
  printf("\nFuncionarios cadastrados:\n");

  for (int i = 0, j = 1; i < registro.quantidade; i++, j++)
  {
    printf("\n\n-----------FUNCIONARIO %d---------------\nNome:%s\nCargo:%s\nCodigo:%d\nAno:%d\n--------------------------------------", j, registro.funcionarios[i].nome, registro.funcionarios[i].cargo, registro.funcionarios[i].codigo, registro.funcionarios[i].ano);
  }

  return registro;
}

RegistroFuncionarios alterarInformacoes(RegistroFuncionarios registro)
{
  char nome[50];
  int opcao;

  do
  {
    printf("\n---------------------- MENU DE ALTERACAO --------------------------------\n");
    printf("\n1 - Alterar codigo");
    printf("\n2 - Alterar nome");
    printf("\n3 - Alterar cargo");
    printf("\n4 - Sair");
    printf("\n------------------------------------------------------------------------\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
      registro = alterarCodigo(registro);
      break;
    case 2:
      registro = alterarNome(registro);
      break;
    case 3:
      registro = alterarCargo(registro);
      break;
    case 4:
      printf("MENU ENCERRADO!\n");
      break;
    default:
      printf("Opcao invalida, tente novamente:\n");
      break;
    }
  } while (opcao != 4);

  printf("Funcionario nao encontrado!");

  return registro;
}

RegistroFuncionarios alterarNome(RegistroFuncionarios registro)
{
  char nome[50], novoNome[50];

  printf("Digite o NOME do funcionario que deseja alterar: ");
  scanf(" %[^\n]s", nome);

  for (int i = 0; i < registro.quantidade; i++)
  {
    if (strcmp(registro.funcionarios[i].nome, nome) == 0)
    {
      printf("Digite o novo nome: ");
      scanf(" %[^\n]s", novoNome);

      strcpy(registro.funcionarios[i].nome, novoNome);

      printf("Nome alterado com sucesso!\n");

      return registro;
    }
  }

  printf("Funcionario nao encontrado!");

  return registro;
}

RegistroFuncionarios alterarCargo(RegistroFuncionarios registro)
{
  char nome[50], novoCargo[50];

  printf("Digite o NOME do funcionario que quer alterar: ");
  scanf(" %[^\n]s", nome);

  for (int i = 0; i < registro.quantidade; i++)
  {
    if (strcmp(registro.funcionarios[i].nome, nome) == 0)
    {
      printf("Digite o novo cargo: ");
      scanf(" %[^\n]s", novoCargo);

      strcpy(registro.funcionarios[i].cargo, novoCargo);

      printf("Cargo alterado com sucesso!\n");

      return registro;
    }
  }

  printf("Funcionario nao encontrado!");

  return registro;
}

RegistroFuncionarios alterarCodigo(RegistroFuncionarios registro)
{
  int codigo, novoCodigo;

  printf("Digite o CODIGO do funcionario que deseja alterar: ");
  scanf("%d", &codigo);

  for (int i = 0; i < registro.quantidade; i++)
  {
    if (registro.funcionarios[i].codigo == codigo)
    {
      printf("Digite o novo codigo: ");
      scanf("%d", &novoCodigo);

      registro.funcionarios[i].codigo = novoCodigo;

      printf("Codigo alterado com sucesso!\n");

      return registro;
    }
  }

  printf("Funcionario nao encontrado.");

  return registro;
}

RegistroFuncionarios excluirFuncionario(RegistroFuncionarios registro)
{
  char nome[50];
  int codigo;

  printf("\nInforme o CODIGO do funcionario para exclui-lo: ");
  scanf("%d", &codigo);

  for (int i = 0; i < registro.quantidade; i++)
  {
    if (registro.funcionarios[i].codigo == codigo)
    {
      for (int j = i; j < registro.quantidade - 1; j++)
      {
        registro.funcionarios[j] = registro.funcionarios[j + 1];
      }

      registro.quantidade--;

      printf("\nFuncionario excluido com sucesso.\n");

      return registro;
    }
  }

  printf("Funcionario nao encontrado.");

  return registro;
}
