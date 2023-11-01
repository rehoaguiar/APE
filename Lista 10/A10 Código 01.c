#include <stdio.h>
int main() {
  // Declaração de variáveis
  int vetor[10];

  // Repetição
  for(int i = 0; i < 10; i++){
    printf("Digite um número: ");
    scanf("%d", &vetor[i]);
  }

  printf("\nOs números que se repetiram no vetor foram: ");
  for(int i = 0; i < 10; i++){
    int j = i + 1;
    if(vetor[i] == vetor[j]){
      printf("%d, ", vetor[j]);
    }
  }
}