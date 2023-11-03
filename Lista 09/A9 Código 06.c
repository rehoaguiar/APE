#include <stdio.h>

int main() {
  int vetor[10], maiorElemento, menorElemento;

  // Entrada de Dados
  printf("Vamos começar digitando um valor para cada uma das posições!\n\n");
  
  for(int i = 0; i < 10; i++){
    printf("Digite o valor do número escolhido: ");
    scanf("%d", &vetor[i]);
  }

  // Inicializando as variáveis
  maiorElemento = menorElemento = vetor[0];

  // Encontre o maior e o menor elemento do vetor
  for(int i = 1; i < 10; i++){
    if(vetor[i] > maiorElemento){
      maiorElemento = vetor[i];
    } 
    if(vetor[i] < menorElemento){
      menorElemento = vetor[i];
    } 
  }

  // Saída de Dados
    printf("\nO menor elemento do vetor é igual a: %d", menorElemento);
  printf("\nO maior elemento do vetor é igual a: %d", maiorElemento);
}
