#include <stdio.h>

int main() {
  int numero;

  do {
    printf("Digite um numero positivo: ");
    scanf("%d", &numero);

    if (numero <= 0) {
      printf("Por favor, digite um numero positivo");
    }

  } while (numero <= 0);

  printf("Os divisores do numero %d sao: ", numero);

  for (int i = 1; i <= numero; i++) {
    if (numero % i == 0) {
      printf("%d", i);

      if (i != numero) {
        printf(", ");
      }
    }
  }

  printf("\n");

  return 0;

}
