#include <stdio.h>
#include <math.h>

int main(){
  // Declarando as variáveis
  double x1, x2, y1, y2;

  // Entrada de Dados
  printf("Qual o valor do ponto x1? ");
  scanf("%lf", &x1);

  printf("Qual o valor do ponto y1? ");
  scanf("%lf", &y1);
  
  printf("Qual o valor do ponto x2? ");
  scanf("%lf", &x2);

  printf("Qual o valor do ponto y2? ");
  scanf("%lf", &y2);
  
  // Cálculo
  double distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

  // Saída de Dados
  printf("\nA distância entre os pontos (%.4lf,%.4lf) e (%.4lf,%.4lf) é de %.4lf", x1, y1, x2, y2, distancia);
}
