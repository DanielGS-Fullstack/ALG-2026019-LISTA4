#include <stdio.h>

int main() {
    int v1[10], v2[10];
    int i;

    // Leitura do primeiro vetor
    for(i = 0; i < 10; i++) {
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &v1[i]);
    }

    // Criação do vetor invertido em um for separado
    for(i = 0; i < 10; i++) {
        v2[i] = v1[9 - i];
    }

    // Exibição do vetor invertido
    printf("Vetor invertido:\n");

    for(i = 0; i < 10; i++) {
        printf("%d ", v2[i]);
    }

    return 0;
}
