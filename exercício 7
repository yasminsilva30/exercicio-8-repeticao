#include <stdio.h>

int main() {
  int numHomens = 0, numMulheres = 0;
  float alturaHomens = 0, alturaMulheres = 0, alturaTotal = 0;
  float pesoHomens = 0, pesoMulheres = 0, pesoTotal = 0;

  for (int i = 1; i <= 10; i++) {
    char nome[50];
    char sexo;
    float altura, peso;

    printf("\n Digite o nome da pessoa %d: \n", i);
    scanf("%s", nome);

    printf("\n Digite o sexo da pessoa %d (M/F): \n", i);
    scanf(" %c", &sexo);

    printf("\n Digite a altura da pessoa %d (em metros): \n", i);
    scanf("%f", &altura);

    printf("\n Digite o peso da pessoa %d (em kg): \n", i);
    scanf("%f", &peso);

    if (sexo == 'M' || sexo == 'm') {
      numHomens++;
      alturaHomens += altura;
      pesoHomens += peso;
    } else if (sexo == 'F' || sexo == 'f') {
      numMulheres++;
      alturaMulheres += altura;
      pesoMulheres += peso;
    } else {
      printf("\n Sexo invalido. Digite M/m ou F/f");
      i--;
    }

    alturaTotal += altura;
    pesoTotal += peso;
  }

  float alturaMediaHomens = numHomens > 0 ? alturaHomens / numHomens : 0;
  float alturaMediaMulheres =
      numMulheres > 0 ? alturaMulheres / numMulheres : 0;
  float alturaMediaGrupo = alturaTotal / 10;

  float pesoMediaHomens = numHomens > 0 ? pesoHomens / numHomens : 0;
  float pesoMediaMulheres = numMulheres > 0 ? pesoMulheres / numMulheres : 0;
  float pesoMediaGrupo = pesoTotal / 10;

  printf("\n Resultados: \n");
  printf("\n Numero de homens: %d", numHomens);
  printf("\n Numero de mulheres: %d", numMulheres);
  printf("\n Altura media dos homens: %.2f metros", alturaMediaHomens);
  printf("\n Altura media das mulheres: %.2f metros", alturaMediaMulheres);
  printf("\n Altura media do grupo: %.2f metros", alturaMediaGrupo);
  printf("\n Peso medio dos homens: %.2f kg", pesoMediaHomens);
  printf("\n Peso medio das mulheres: %.2f kg", pesoMediaMulheres);
  printf("\n Peso medio do grupo: %.2f kg", pesoMediaGrupo);

  return 0;

}
