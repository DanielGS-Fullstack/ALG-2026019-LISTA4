#include <stdio.h>

int main() {
    int vetor[10];
    int i;
    int pares = 0, impares = 0;

    // Leitura dos números
    for(i = 0; i < 10; i++) {
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    // Verificação em um for separado
    for(i = 0; i < 10; i++) {
        if(vetor[i] % 2 == 0) {
            pares++;
        } else {
            impares++;
        }
    }

    printf("Quantidade de pares: %d\n", pares);
    printf("Quantidade de impares: %d\n", impares);

    return 0;
}
