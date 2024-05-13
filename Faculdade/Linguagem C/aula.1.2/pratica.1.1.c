#include <stdio.h>
#include <stdlib.h>

int main() {
  int vetor[3];
  int i;

  for (i = 0; i < 3; i++) {
    printf("digite um numero: ");
    scanf("%d", &vetor[i]);
  }

  if ((vetor[0] == vetor[1]) && (vetor[1] == vetor[2])) {
    printf("Os valores sao iguais");
  } else {
    printf("Os valores n sao iguais ");
 }
}
