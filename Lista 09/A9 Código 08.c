#include <stdio.h>

int main() {
  int vetor[6];

  // Entrada de dados
  for(int i = 0; i < 6; i++){
    printf("\nDigite um número: ");
    scanf("%d", &vetor[i]);
  }

  // Saída de dados
  for(int i = 5; i >= 0; i--){
    printf("\n%d", vetor[i]);
  }
}
