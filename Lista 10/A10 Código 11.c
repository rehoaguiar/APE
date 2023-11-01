#include <stdio.h>
int main() {
  // Declaração de variáveis
  double vetorAluno[10][2];
  int alunoMaisAlto = 0, alunoMaisBaixo = 0;

  // Preenchimento do vetor de aluno e altura
  printf("Preencha os valores do Vetor Aluno e Altura.\n\n");

  for (int i = 0; i < 10; i++) {
    printf("Digite o número do aluno %d: ", i + 1);
    scanf("%lf", &vetorAluno[i][0]);

    printf("Digite a altura do aluno %d em metros: ", i + 1);
    scanf("%lf", &vetorAluno[i][1]);
  }

  // Encontrar o aluno mais alto e o aluno mais baixo
  for (int i = 1; i < 10; i++) {
    if (vetorAluno[i][1] > vetorAluno[alunoMaisAlto][1]) {
      alunoMaisAlto = i;
    }

    if (vetorAluno[i][1] < vetorAluno[alunoMaisBaixo][1]) {
      alunoMaisBaixo = i;
    }
  }

  // Exibir os resultados
  printf("Aluno mais alto: Número %.0lf, Altura %.2lf metros\n", vetorAluno[alunoMaisAlto][0], vetorAluno[alunoMaisAlto][1]);
}