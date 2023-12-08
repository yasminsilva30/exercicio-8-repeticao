#include <stdio.h>

int main() {
  int n;

  do {
    printf("Digite um numero inteiro positivo");
    scanf("%d", &n);

    if (n < 0) {
      printf("Por favor, digite um numero positivo");
    }

  } while (n < 0);

  int a = 0, b = 1, resultado;

  if (n == 0) {
    resultado = a;
  } else if (n == 1) {
    resultado = b;
  } else {
    for (int i = 2; i <= n; i++) {
      resultado = a + b;
      a = b;
      b = resultado;
    }
  }

  printf("\n O %d termo da sequencia de Fibonacci eh: %d", n, resultado);

  return 0;

}
