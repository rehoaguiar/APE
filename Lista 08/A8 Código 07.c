#include <stdio.h>

int main() {
  int contador = 0;
  float nota1, nota2, nota3;
  double mediaPonderada, mediaGeral = 0, somatoriaGeral = 0;

  while (contador < 30){
    printf("\nInsira a primeira nota: ");
    scanf("%f", &nota1);
    
    printf("Insira a segunda nota: ");
    scanf("%f", &nota2);
    
    printf("Insira a terceira nota: "); // Corrigido o texto aqui
    scanf("%f", &nota3);

    mediaPonderada = (nota1 * 3 + nota2 * 4 + nota3 * 3) / 10;
    contador++;

    somatoriaGeral += mediaPonderada;

    if (mediaPonderada >= 7){
      printf("Parabéns você foi aprovado!\n");
    } else {
      printf("Infelizmente, você foi reprovado\n");
    }   
  }

  mediaGeral = somatoriaGeral / 30;
  printf("\nA média geral da turma é: %.2lf\n", mediaGeral);
}
