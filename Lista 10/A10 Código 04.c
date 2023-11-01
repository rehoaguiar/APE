#include <stdio.h>
int main() {
  // Declaração de variáveis
  int vetor[10];
  
  // Repetição
  for(int i = 0; i < 10; i++){
    printf("Digite um número: ");
    scanf("%d", &vetor[i]);
    
    if(vetor[i] < 0){
      vetor[i] = 0;
    }
  }
  
  for(int j = 0; j < 10; j++){
    printf("\n%d ", vetor[j]);
  } 
}