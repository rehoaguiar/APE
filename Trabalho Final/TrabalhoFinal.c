#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Veiculo {
  char proprietario[50];
  char modelo[50];
  char cor[20];
  char placa[10];
  int ano;
  char combustivel[15];
  char numChassi[17];
  struct Veiculo* prox;
} Veiculo;

Veiculo* criarRegistro() {
  Veiculo* novoVeiculo = (Veiculo*)malloc(sizeof(Veiculo));

  if (novoVeiculo == NULL) {
    printf("Erro de alocação de memória");
    exit(EXIT_FAILURE);
  }

  novoVeiculo->prox = NULL;
  return novoVeiculo;
}

Veiculo* adicionarElemento(Veiculo* lista, Veiculo veiculo) {
  Veiculo* novoElemento = (Veiculo*)malloc(sizeof(Veiculo));

  if (novoElemento == NULL) {
    printf("Erro de alocação de memória");
    exit(EXIT_FAILURE);
  }

  *novoElemento = veiculo;
  novoElemento->prox = lista;
  return novoElemento;
}

void cadastrarNovoVeiculo(Veiculo** lista) {
  char opcaoGasolina;
  Veiculo novoVeiculo;

  // Nome
  printf("\nDigite o nome completo do proprietário: ");
  fflush(stdin);
  fgets(novoVeiculo.proprietario, sizeof(novoVeiculo.proprietario), stdin);
  fflush(stdin);
  
  // Combustível
  printf("\nDigite o tipo de combustível do veículo (A -> Álcool, G -> Gasolina, D -> Diesel): ");
  scanf(" %c", &opcaoGasolina);
  switch (opcaoGasolina) {
    case 'A':
      strcpy(novoVeiculo.combustivel, "Álcool");
      break;
    case 'G':
      strcpy(novoVeiculo.combustivel, "Gasolina");
      break;
    case 'D':
      strcpy(novoVeiculo.combustivel, "Diesel");
      break;
    default:
      printf("Opção de combustível inválida.\n");
      return;
  }

  // Modelo
  printf("\nDigite o modelo do carro: ");
  fflush(stdin);
  fgets(novoVeiculo.modelo, sizeof(novoVeiculo.modelo), stdin);

  // Cor
  printf("\nDigite a cor do carro: ");
  fflush(stdin);
  fgets(novoVeiculo.cor, sizeof(novoVeiculo.cor), stdin);

  // Número do chassi
  printf("\nDigite o número do chassi: ");
  fflush(stdin);
  fgets(novoVeiculo.numChassi, sizeof(novoVeiculo.numChassi), stdin);

  // Ano
  printf("\nDigite o ano: ");
  fflush(stdin);
  scanf(" %d", &novoVeiculo.ano);

  // Placa
  printf("\nDigite o número da placa do carro: ");
  fflush(stdin);
  fgets(novoVeiculo.placa, sizeof(novoVeiculo.placa), stdin);

  *lista = adicionarElemento(*lista, novoVeiculo);
  printf("Veículo cadastrado com sucesso!\n");
}

void listarProprietariosAnoDiesel(Veiculo* lista) {
  printf("\nListagem de Proprietários com Carros do Ano 2010 ou Posterior e Movidos a Diesel:\n");
  while (lista) {
    if (lista->ano >= 2010 && strcmp(lista->combustivel, "Diesel") == 0) {
      printf("Proprietario: %s\n", lista->proprietario);
    }
    lista = lista->prox;
  }
}

void listarPlacasJ(Veiculo* lista) {
  printf("\nListagem de Placas que Começam com 'J' e Terminam com 0, 2, 4 ou 7, com Proprietários:\n");
  while (lista) {
    if (lista->placa[0] == 'J' && (lista->placa[9] == '0' || lista->placa[9] == '2' ||
                                   lista->placa[9] == '4' || lista->placa[9] == '7')) {
      printf("Placa: %s, Proprietario: %s\n", lista->placa, lista->proprietario);
    }
    lista = lista->prox;
  }
}

void listarModeloCorPlacasVogais(Veiculo* lista) {
  printf("\nListagem de Modelo e Cor de Veículos com Placas de Vogais e Soma Par dos Dígitos:\n");
  while (lista) {
    if (strchr("aeiouAEIOU", lista->placa[1])) {
      int somaDigitos = 0;
      for (int i = 2; i < 9; ++i) {
        if (isdigit(lista->placa[i])) {
          somaDigitos += lista->placa[i] - '0';
        }
      }
      if (somaDigitos % 2 == 0) {
        printf("Modelo: %s, Cor: %s\n", lista->modelo, lista->cor);
      }
    }
    lista = lista->prox;
  }
}

void trocarProprietarioPorChassi(Veiculo** lista) {
  char chassiTroca[17];
  char novoProprietario[50];
  printf("\nDigite o número do chassi do veículo: ");
  fflush(stdin);
  fgets(chassiTroca, sizeof(chassiTroca), stdin);

  Veiculo* veiculoTroca = *lista;
  while (veiculoTroca) {
    if (strcmp(veiculoTroca->numChassi, chassiTroca) == 0) {
      printf("Digite o novo proprietário: ");
      fflush(stdin);
      fgets(novoProprietario, sizeof(novoProprietario), stdin);

      strcpy(veiculoTroca->proprietario, novoProprietario);
      printf("Proprietário alterado com sucesso.\n");
      return;
    }
    veiculoTroca = veiculoTroca->prox;
  }

  printf("Veículo não encontrado ou placa possui dígito zero.\n");
}

int main() {
  int opcao;
  Veiculo* listaVeiculos = NULL;

  do {
    // Apresentação
    printf("\n------------------------------------------------\n");
    printf("\nSeja bem-vindo(a) à Secretaria dos Transportes, vamos fazer o seu registro padrão?\n\n");

    // Apresentar opções disponíveis
    printf("\n1: Cadastrar um novo veículo.\n\n");
    printf("2: Listar os proprietários cujos carros são do ano de 2010, ou posterior, e que sejam movidos a diesel.\n\n");
    printf("3: Listar todas as placas que comecem com a letra J e terminem com 0, 2, 4 ou 7, juntamente com o nome dos seus proprietários.\n\n");
    printf("4: Listar o modelo e a cor dos veículos cujas placas possuem como segunda letra uma vogal e cuja a soma fornece um número par\n\n");
    printf("5: Trocar o proprietário com o fornecimento do número do chassi para carros com placas que não possuam nenhum dígito igual a zero.\n\n");
    printf("0: Sair do sistema\n\n");
    printf("\n>> ");

    // Recebe a informação de qual a opção escolhida
    scanf("%d", &opcao);

    switch (opcao) {
      case 1:
        cadastrarNovoVeiculo(&listaVeiculos);
        break;
      case 2:
        listarProprietariosAnoDiesel(listaVeiculos);
        break;
      case 3:
        listarPlacasJ(listaVeiculos);
        break;
      case 4:
        listarModeloCorPlacasVogais(listaVeiculos);
        break;
      case 5:
        trocarProprietarioPorChassi(&listaVeiculos);
        break;
      case 0:
        // Sair do sistema
        break;
      default:
        printf("Opção inválida. Tente novamente.\n");
    }
  } while (opcao != 0);

  return 0;
}