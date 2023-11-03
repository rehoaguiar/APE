#include <stdio.h>

int main() {
  // Declarando as variáveis
  int lugares = 0, idade, a = 0, b = 0, c = 0, d = 0, e = 0, maiorIdadeRuim = 0, maiorIdadeOtimo = 0;
  float mediaIdadeRuim = 0, difPercBR, percP;
  char nota;

  // Entrada de Dados
  while (lugares < 100) {
    printf("\n\nSendo:\n A = Ótimo\n B = Bom\n C = Regular\n D = Ruim\n E = Péssimo\n");
    printf("\nDigite a nota que você daria para esse filme (A/B/C/D/E): ");
    scanf(" %c", &nota);
    
    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    switch (nota) {
      case 'A':
        printf("Você classificou esse filme como 'Ótimo'\n");
        a++;
        if (idade > maiorIdadeOtimo) {
          maiorIdadeOtimo = idade;
        }
        break;
      case 'B':
        printf("Você classificou esse filme como 'Bom'\n");
        b++;
        break;
      case 'C':
        printf("Você classificou esse filme como 'Regular'\n");
        c++;
        break;
      case 'D':
        printf("Você classificou esse filme como 'Ruim'\n");
        d++;
        mediaIdadeRuim += idade;
        if (idade > maiorIdadeRuim) {
          maiorIdadeRuim = idade;
        }
        break;
      case 'E':
        printf("Você classificou esse filme como 'Péssimo'\n");
        e++;
        if (idade > maiorIdadeRuim) {
        maiorIdadeRuim = idade;
        }
        break;
      default:
        printf("Voto inválido! Tente novamente com um valor válido.\n");
        break;
    }
    lugares++;
  }
  
  if (d > 0) {
    mediaIdadeRuim /= d;
  }

  // Cálculo
  difPercBR = (b - c) / lugares * 100;
  percP = (e / lugares) * 100;

  // Saída de Dados
  printf("\n\nForam gravados %d voto(s) 'Ótimo'\n", a);
  printf("A diferença percentual entre respostas 'Bom' e 'Regular' é de: %.2f%%\n", difPercBR);
  printf("A média de idade das pessoas que responderam 'Ruim' é de: %.2f\n", mediaIdadeRuim);
  printf("A percentagem de respostas 'Péssimo' é de: %.2f%%\n", percP);
  printf("A maior idade que utilizou a opção 'Péssimo' é igual a: %d\n", maiorIdadeRuim);
  printf("A diferença de idade entre a maior idade que respondeu 'Ótimo' e a maior idade que respondeu 'Ruim' é de: %d\n", maiorIdadeOtimo-maiorIdadeRuim);
}
