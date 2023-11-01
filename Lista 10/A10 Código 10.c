#include <stdio.h>
int main() {
  // Declaração de variáveis
  float vetorA[5], vetorB[5], vetorC[5];

  // Imprimir texto
  printf("Preencha os valores do Vetor A.\n\n");
  
  // Repetição
  for(int i = 0; i < 5; i++) {
    printf("Digite um número: ");
    scanf("%f", &vetorA[i]);
  }

  printf("\nPreencha os valores do Vetor B.\n\n");

  for(int i = 0; i < 5; i++) {
    printf("Digite um número: ");
    scanf("%f", &vetorB[i]);
  }

  // Cálculo
  for(int i = 0; i < 5; i++) {
    vetorC[i] = vetorA[i] * vetorB[i];
  }
  
  // Saída de Dados
  printf("\nValores do Vetor A: ");
  
  for (int i = 0; i < 5; i++) {
    printf("%.2f ", vetorA[i]);
  }

  printf("\n\nValores do Vetor B: ");
  
  for (int i = 0; i < 5; i++) {
    printf("%.2f ", vetorB[i]);
  }

  printf("\n\nValores do Vetor C: ");

  for (int i = 0; i < 5; i++) {
    printf("%.2f ", vetorC[i]);
  }
}