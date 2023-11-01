#include <stdio.h>

void trocaTroca(int matriz[10][10]) {
  for (int i = 0; i < 10; i++) {
    int temp;

    // Trocar a linha 2 com a linha 8
    temp = matriz[2][i];
    matriz[2][i] = matriz[8][i];
    matriz[8][i] = temp;

    // Trocar a coluna 4 com a coluna 10
    temp = matriz[i][4];
    matriz[i][4] = matriz[i][9];
    matriz[i][9] = temp;

    // Trocar a diagonal principal com a secundária
    // Evitar uma troca duplicada
    if (i != 4) { // Evitar a troca duplicada do elemento no meio
      temp = matriz[i][i];
      matriz[i][i] = matriz[i][9 - i];
      matriz[i][9 - i] = temp;
    }

    // Trocar a linha 5 com a coluna 10    
    temp = matriz[5][i];
    matriz[5][i] = matriz[i][9];
    matriz[i][9] = temp;
  }
}

int main() {
  int matriz[10][10];

  // Entrada de dados para a matriz
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      printf("Digite um número para a posição (%d, %d): ", i + 1, j + 1);
      scanf("%d", &matriz[i][j]);
    }
  }

  // Impressão da Matriz antes da mudança
  printf("\nMatriz antes da mudança:\n");
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      printf("%d ", matriz[i][j]);
    }
    printf("\n");
  }

  // Troca
  trocaTroca(matriz);

  // Impressão da Matriz depois da troca
  printf("\nMatriz depois da mudança:\n");
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      printf("%d ", matriz[i][j]);
    }
    printf("\n");
  }
}