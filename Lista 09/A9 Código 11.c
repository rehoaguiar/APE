#include <stdio.h>

int main() {
  int vetor[10], numNeg = 0, numPositivo = 0, somaPositivo = 0;

  // Entrada de Dados
  printf("Vamos começar digitando um valor para cada uma das posições!\n\n");
  
  for(int i = 0; i < 10; i++){
    printf("Digite o valor do número escolhido: ");
    scanf("%d", &vetor[i]);
  }

  for(int i = 0; i < 10; i++){
    if(vetor[i] > 0){
      numPositivo++;
      somaPositivo += vetor[i];
    } else{
      numNeg++;
    }
  }
  
  // Saída de dados
  printf("\nA soma dos números presentes no vetor é igual a: %d", somaPositivo);
  printf("\nO vetor apresentado possui %d números negativos\n", numNeg);
}
