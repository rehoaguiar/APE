#include <stdio.h>
int main() {
  // Declaração de variáveis
  int vetorA[10], vetorB[10], vetorC[10];

  // Imprimir texto
  printf("Preencha os valores do Vetor A.\n\n");
  
  // Repetição
  for(int i = 0; i < 10; i++) {
    printf("Digite um número: ");
    scanf("%d", &vetorA[i]);
  }

  printf("\nPreencha os valores do Vetor B.\n\n");

  for(int i = 0; i < 10; i++) {
    printf("Digite um número: ");
    scanf("%d", &vetorB[i]);
  }

  // Cálculo

  for(int i = 0; i > 10; i++) {
    vetorC[i] = vetorA[i] - vetorB[i];
  }
  
  // Saída de Dados
  printf("\nValores do Vetor A: ");
  
  for (int i = 0; i < 10; i++) {
    printf("%d ", vetorA[i]);
  }

  printf("\n\nValores do Vetor B: ");
  
  for (int i = 0; i < 10; i++) {
    printf("%d ", vetorB[i]);
  }

  printf("\n\nValores do Vetor C: ");

  for (int i = 0; i < 10; i++) {
    printf("%d ", vetorC[i]);
  }
}