#include <stdio.h>
#include <limits.h> // Para usar INT_MAX

int main() {
  int vetor[10], maiorElemento = INT_MIN, maiorPosicao = 0, menorElemento = INT_MAX, menorPosicao = 0;

  // Entrada de Dados
  printf("Vamos começar digitando um valor para cada uma das posições!\n\n");
  
  for(int i = 0; i < 10; i++){
    printf("Digite o valor do número escolhido: ");
    scanf("%d", &vetor[i]);
  }

  for(int i = 0; i < 10; i++){
    if(vetor[i] > maiorElemento){
      maiorElemento = vetor[i];
      maiorPosicao = i + 1;
    }
    
    if(vetor[i] < menorElemento){
      menorElemento = vetor[i];
      menorPosicao = i + 1;
    }
  }
  
  // Saída de dados
  printf("\nO menor elemento é %d e está localizado na posição %d\n", menorElemento, menorPosicao);
  printf("O maior elemento é %d e está localizado na posição %d\n", maiorElemento, maiorPosicao);
}
