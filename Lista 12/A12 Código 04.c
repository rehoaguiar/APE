#include <stdio.h>

// Função para somar individualmente as colunas da matriz
void somarColunas(int matriz[61][10]) {
  for (int coluna = 0; coluna < 10; coluna++) {
    int soma = 0;
    for (int linha = 0; linha < 61; linha++) {
      soma += matriz[linha][coluna];
    }
    matriz[61][coluna] = soma;
  }
}

int main() {
  int matriz[61][10];

  // Preencha a matriz com seus valores
  for (int linha = 0; linha < 61; linha++) {
    for (int coluna = 0; coluna < 10; coluna++) {
      printf("Digite um número para a posição (%d, %d): ", linha + 1, coluna + 1);
      scanf("%d", &matriz[linha][coluna]);
    }
  }

  // Cálculo
  somarColunas(matriz);

  // Agora a soma de cada coluna está armazenada na 61ª linha da matriz
  printf("Soma da primeira coluna: %d\n", matriz[60][0]);
}