#include <stdio.h>

int main() {
  // Declarando as variáveis
  double a, b, c;

  // Entrada de Dados
  printf("Qual o valor do lado A? ");
  scanf("%lf", &a);

  printf("Qual o valor do lado B? ");
  scanf("%lf", &b);

  printf("Qual o valor do lado C? ");
  scanf("%lf", &c);
  
  // Verificação do tipo de triângulo
  if (a == b && b == c) {
    printf("\nEsse é um triângulo equilátero\n");
  } else if (a == b || b == c || a == c) {
    printf("\nEsse é um triângulo isósceles\n");
  } else {
    printf("\nEsse é um triângulo escaleno\n");
  }
}
