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
  
  // Verificação se é um triângulo
  if (a + b > c && a + c > b && b + c > a) {
    if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a) {
      printf("Esse é um triângulo retângulo (Ele contém pelo menos um ângulo de 90°)\n");
    } else if (a * a + b * b < c * c || a * a + c * c < b * b || b * b + c * c < a * a) {
      printf("Esse é um triângulo obtusângulo (Ele contém três ângulos menores que 90°)\n");
    } else {
      printf("Esse é um triângulo acutângulo (Ele pelo menos um ângulo maior que 90°)\n");
    }
  } else {
    printf("\nÉ impossível formar um triângulo com os valores fornecidos");
  }
}
