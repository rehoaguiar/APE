#include <stdio.h>

int main() {
  // Declaração de variáveis
  int vetor[100], num = 1;

  // Preenchimento do vetor
  printf("Esse vetor está preenchidos com os 100 primeiros números naturais que não são múltiplos de 7 e nem terminam com 7\n\n");
  
  for (int i = 0; i < 100;) {
    if (num % 7 != 0 && num % 10 != 7){
      vetor[i] = num;
      i++;
    }
    num++;
  }

  // Saída de Dados
  for(int i = 0; i < 100; i++){
    printf("%d\n", vetor[i]);
  }
}