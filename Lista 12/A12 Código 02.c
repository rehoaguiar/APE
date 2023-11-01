#include <stdio.h>

void calcularLocacoesGratuitas(int VetorA[500]) {
  int locacoesGratuitas[500];

  printf("Quantidade de locações gratuitas para cada cliente:\n\n");
  for (int i = 0; i < 500; i++) {
    locacoesGratuitas[i] = VetorA[i] / 15;
    printf("%d", locacoesGratuitas[i]);
  }
}

int main() {
  int vetorA[500];

  for (int i = 0; i < 500; i++) {
    vetorA[i] = (100 - i) / (1 + i / 25);
    if (vetorA[i] < 0) {
      vetorA[i] = vetorA[i] * (-1);
    }
  }

  printf("Quantidade de locações guardadas para cada cliente em 2020:\n\n");
  for (int i = 0; i < 500; i++) {
    printf("%d ", vetorA[i]);
  }
  printf("\n\n");

  calcularLocacoesGratuitas(vetorA);
}