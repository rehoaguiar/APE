#include <stdio.h>

int main() {
  int vetor[10], maiorElemento = 0, maiorPosicao = 0;

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
  }
  
  // Saída de dados
  printf("\nO maior elemento é %d e está localizado na posição %d", maiorElemento, maiorPosicao);
}
