#include <stdio.h>

// Função
void imprimir();
int maiorValor(int n1, int n2);

int main() {
  // Declaração de variáveis
  int numero1, numero2, retornoFuncao;

  // Chamada ou Invocação da Função
  imprimir();

  printf("\nDigite os valores: ");
  scanf("%d", &numero1);

  printf("Digite os valores: ");
  scanf("%d", &numero2);

  // Chamada da função com retorno
  retornoFuncao = maiorValor(numero1, numero2);
  printf("\nO maior valor é: %d", retornoFuncao);
}

void imprimir() { printf("Imprimindo a função.\n"); }

int maiorValor(int n1, int n2) {
  if (n1 > n2) {
    return n1;
  } else {
    return n2;
  }
}