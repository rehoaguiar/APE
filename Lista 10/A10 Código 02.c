#include <stdio.h>
int main() {
  // Declaração de variáveis
  int vetor[20];

  // Repetição
  for(int i = 0; i < 20; i++){
    printf("Digite um número: ");
    scanf("%d", &vetor[i]);
  }

  for(int i = 0; i < 20; i++){
    if(vetor[i] != vetor[i+1]){
      printf("%d, ", vetor[i]);
    }
  }
}