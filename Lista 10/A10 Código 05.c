#include <stdio.h>
int main() {
  // Declaração de variáveis
  int vetor[10], encontrados[10], multiplo, j = 0;

  // Entrada de dados
  printf("Qual número você quer utilizar como múltiplo: ");
  scanf("%i", &multiplo);
  printf("\n");

  // Repetição
  for (int i = 0; i < 10; i++) {
    printf("Digite um número: ");
    scanf("%d", &vetor[i]);

    if (vetor[i] % multiplo == 0) {
      encontrados[j] = vetor[i];
      j++;
    }
  }

  // Mostrar os múltiplos encontrados
  printf("\nOs múltiplos de %d são: ", multiplo);
  for (int i = 0; i < j; i++) {
    printf("%d ", encontrados[i]);
  }
}