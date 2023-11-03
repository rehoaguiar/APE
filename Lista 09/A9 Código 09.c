#include <stdio.h>

int main() {
  int vetor[6];

  // Entrada de Dados
  printf("Vamos começar digitando um valor par para cada uma das posições!\n\n");
  
  for (int i = 0; i < 6; i++) {
    do {
      printf("Digite o valor do número escolhido: ");
      scanf("%d", &vetor[i]);
    } while (vetor[i] % 2 != 0);
  }
  
  // Saída de dados
  for(int i = 5; i >= 0; i--){
    printf("\n%d", vetor[i]);
  }
}
