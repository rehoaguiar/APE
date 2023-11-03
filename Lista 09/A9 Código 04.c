#include <stdio.h>

int main() {
  int vetor[8], x, y, soma;

  // Entrada de Dados
  printf("Vamos começar digitando um valor para cada uma das posições!\n\n");
  
  for(int i = 0; i < 8; i++){
    printf("Digite o valor do número escolhido: ");
    scanf("%d", &vetor[i]);
  }

  printf("\n\nDigite qual será a posição de x: ");
  scanf("%d", &x);

  printf("\n\nDigite qual será a posição de y: ");
  scanf("%d", &y);

  // Ajustando os valores para que eles comecem em 1 e não em 0
  x--;
  y--;

  // Verificar se a posição é válida
  if(x >= 0 && x <= 8 && y >= 0 && y <= 8){
    soma = vetor[x] + vetor[y];
    printf("\nA soma das posiços acima é igual a: %d", soma);
  } else {
   printf("\nPosição inválida! A posição digitada não se encontra no intervalo do vetor");
  }
}
