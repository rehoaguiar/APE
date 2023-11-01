#include <stdio.h>
int main() {
  // Declaração de variáveis
  float vetor[5];
  int cod;

  // Repetição
  for(int i = 0; i < 5; i++){
    printf("Digite um número: ");
    scanf("%f", &vetor[i]);
  }

  // Entrada de Dados
  printf("\nSabendo que:\n 0: Irá finalizar o programa;\n 1: Apresentará os números na ordem direta;\n 2: Apresentará os números na ordem indireta.\n \nDigite um dos códigos acima e decida o que você quer fazer: ");
  scanf("%d", &cod);

  // Saída de Dados
  switch(cod){
    case 0:
      break;
    case 1:
      printf("\n");
      for (int i = 0; i < 5; i++){
        printf("%.2f ", vetor[i]);
      }
      break;
    case 2:
      printf("\n");
      for (int i = 4; i >= 0; i--){
        printf("%.2f ", vetor[i]);
      }
      break;
    default:
      printf("Código inválido");
      break;
  }
}