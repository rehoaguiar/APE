#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Estrutura para representar um produto
typedef struct {
  int codigo;
  char descricao[50];
  int quantidade;
  float valor;
  struct Produto *prox;
} Produto;

// Função para criar um novo produto
Produto* criarProduto() {
  Produto* novoProduto = (Produto*)malloc(sizeof(Produto));
  if (novoProduto == NULL) {
    printf("Erro de alocação de memória");
    exit(EXIT_FAILURE);
  }
  novoProduto->prox = NULL;
  return novoProduto;
}

// Função para cadastrar um novo produto na lista de estoque
Produto* cadastrarProduto(Produto* lista) {
  Produto* novoProduto = criarProduto();

  printf("\n-----------------------------");
  printf("\nCadastro de Produto");
  printf("\n-----------------------------");

  // Entrada de Dados
  printf("\nDigite o código do produto: ");
  scanf("%d", &novoProduto->codigo);
  fflush(stdin);

  printf("Digite a descrição do produto: ");
  scanf("%s", novoProduto->descricao);
  fflush(stdin);

  printf("Digite a quantidade do produto: ");
  scanf("%d", &novoProduto->quantidade);
  fflush(stdin);

  printf("Digite o valor do produto: ");
  scanf("%f", &novoProduto->valor);
  fflush(stdin);

  // Verificar se a lista é nula
  if (lista == NULL) {
    return novoProduto; // Novo produto será o primeiro elemento da lista
  } else {
    Produto* atual = lista;
    while (atual->prox != NULL) {
      atual = atual->prox;
    }
    atual->prox = novoProduto;
    return lista;
  }
}

// Função para mostrar o relatório de produtos
void mostrarRelatorio(Produto* lista) {
  Produto* atual = lista;
  printf("\n-----------------------------");
  printf("\nRelatório de Produtos");
  printf("\n-----------------------------");
  printf("\n");

  while (atual != NULL) {
    printf("\nCódigo: %d", atual->codigo);
    printf("\nDescrição: %s", atual->descricao);
    printf("\nQuantidade: %d", atual->quantidade);
    printf("\nValor: %.2f", atual->valor);
    printf("\n");
    atual = atual->prox;
  }
}

// Função para pesquisar um produto pelo código
Produto* buscarProduto(Produto* lista, int codigoBusca) {
  Produto* atual = lista;
  while (atual != NULL) {
    if (atual->codigo == codigoBusca) {
      printf("\nCódigo: %d", atual->codigo);
      printf("\nDescrição: %s", atual->descricao);
      printf("\nQuantidade: %d", atual->quantidade);
      printf("\nValor: %.2f", atual->valor);
      return atual;
    }
    atual = atual->prox;
  }
  printf("Produto não encontrado");
  return NULL;
}

// Função para remover um produto do estoque
Produto* removerProduto(Produto* lista, int codigoBusca) {
  Produto* atual = lista;
  Produto* anterior = NULL;

  while (atual != NULL && atual->codigo != codigoBusca) {
    anterior = atual;
    atual = atual->prox;
  }

  if (atual != NULL) {
    if (anterior == NULL) {
      // Remoção do primeiro produto
      lista = atual->prox;
    } else {
      // Remoção de um produto no meio ou final da lista
      anterior->prox = atual->prox;
    }

  free(atual);
    printf("Produto removido com sucesso!");
  } else {
    printf("Produto não encontrado!");
  }

  return lista;
}

// Função para liberar a memória da lista de produtos
void liberarLista(Produto* lista) {
  Produto* atual = lista;
  Produto* prox;

  while (atual != NULL) {
    prox = atual->prox;
    free(atual);
    atual = prox;
  }
}

int main() {
  int opcao;
  int codigoBusca;
  Produto* encontrado;
  Produto* estoque = NULL;

  do {
    printf("\n\n-----------------------------");
    printf("\n Digite 1 para cadastrar produto");
    printf("\n Digite 2 para mostrar relatório de produtos");
    printf("\n Digite 3 para buscar produto");
    printf("\n Digite 4 para remover produto");
    printf("\n Digite 0 para sair");
    printf("\n >>> ");
    scanf("%d", &opcao);

    switch (opcao) {
      case 1:
        estoque = cadastrarProduto(estoque);
        break;

      case 2:
        mostrarRelatorio(estoque);
        break;

      case 3:
        printf("\nDigite o código do produto para busca: ");
        scanf("%d", &codigoBusca);
        buscarProduto(estoque, codigoBusca);
        break;

      case 4:
        printf("\nDigite o código do produto para remoção: ");
        scanf("%d", &codigoBusca);
        estoque = removerProduto(estoque, codigoBusca);
        break;

      case 0:
        break;

      default:
        printf("Opção inválida! Favor digitar um dos valores citados anteriormente");
        break;
      }
  } while (opcao != 0);

  liberarLista(estoque);
  return 0;
}