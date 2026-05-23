#include <stdio.h>

int main() {
    int vetor[10];
    int i;
    float soma = 0, media;

    // Leitura dos valores
    for(i = 0; i < 10; i++) {
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    // Cálculo da soma em um for separado
    for(i = 0; i < 10; i++) {
        soma += vetor[i];
    }

    media = soma / 10;

    printf("Media = %.2f\n", media);

    return 0;
}
