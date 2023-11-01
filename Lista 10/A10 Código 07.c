#include <stdio.h>
int main() {
  // Declaração de variáveis
  int vetor1[10], vetor2[10], j = 0;

  // Imprimir texto
  printf("Respeitando o intervalo de 0 a 50, faça o que se pede.\n\n");
  
  // Repetição
  for(int i = 0; i < 10; i++) {
    int num;

    do {
      printf("Digite um número: ");
      scanf("%d", &num);
      
      if(num > 50 || num < 0) {
        printf("Número inválido, adicione um número que respeite o intervalo entre [0,50]");
      }
    } while(num < 0 || num > 50);

    vetor1[i] = num;
    
    if (num % 2 != 0) {
      vetor2[j] = num;
      j++;
    }
    
  }

  // Saída de Dados
  printf("\nPrimeiro vetor foi composto por: ");
  
  for (int i = 0; i < 10; i++) {
    printf("%d ", vetor1[i]);
  }

  printf("\n\nOs números ímpares presentes nele são: ");
  for (int i = 0; i < j; i++) {
    printf("%d ", vetor2[i]);
  }
}