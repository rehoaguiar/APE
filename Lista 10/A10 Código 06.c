#include <stdio.h>
int main() {
  // Declaração de variáveis
  int vetor[50];

  // Repetição
  for (int i = 0; i < 50; i++) {
    vetor[i] = (i + 5 * i) % (i + 5);
  }

  // Saída de Dados
  for (int i = 0; i < 50; i++) {
    printf("%d ", vetor[i]);
  }
}