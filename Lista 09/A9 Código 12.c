#include <stdio.h>

int main() {
  int vetor[5], menorElemento, maiorElemento, somaElemento = 0;
  double mediaElemento;

  // Entrada de Dados
  printf("Vamos começar digitando um valor para cada uma das posições!\n\n");
  
  for (int i = 0; i < 5; i++) {
    printf("Digite um valor: ");
    scanf("%d", &vetor[i]);

    // Inicializa o maior e o menor com o primeiro elemento
    if (i == 0) {
      maiorElemento = menorElemento = vetor[i];
    } else {
      // Atualiza o maior e o menor conforme necessário
      if (vetor[i] > maiorElemento) {
        maiorElemento = vetor[i];
      } 
      if (vetor[i] < menorElemento) {
        menorElemento = vetor[i];
      }
    }

    somaElemento += vetor[i];
  }
  
  mediaElemento = (double)somaElemento / 5;
  
  // Saída de dados
  printf("\nValores digitados:\n");
  for(int i = 0; i < 5; i++) {
    printf("%d\n", vetor[i]);
  }

  printf("O menor elemento desse vetor é igual a: %d\n", menorElemento);
  printf("O maior elemento desse vetor é igual a: %d\n", maiorElemento);
  printf("A média dos elementos desse vetor é igual a: %.2f\n", mediaElemento);
}
