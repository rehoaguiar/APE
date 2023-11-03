#include <stdio.h>

int main() {
  int vetor[10], numerosPares = 0;

  // Entrada de Dados
  printf("Vamos começar digitando um valor para cada uma das posições!\n\n");
  
  for(int i = 0; i < 10; i++){
    printf("Digite o valor do número escolhido: ");
    scanf("%d", &vetor[i]);
  }
  
  // If
   for(int i = 0; i < 10; i++){
    if(vetor[i] % 2 == 0){
      ++numerosPares;
    }
  }

  // Saída de Dados
  printf("\nNo vetor citado acima foram encontrados %d números pares", numerosPares);
}
