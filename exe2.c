#include <stdio.h>

int main() {
    int vetor[15];
    int alvo;
    int i;
    int indice = -1;
    int frequencia = 0;

    for(i = 0; i < 15; i++) {
        scanf("%d", &vetor[i]);
    }

    scanf("%d", &alvo);

    for(i = 0; i < 15; i++) {
        if(vetor[i] == alvo) {
            frequencia++;

            if(indice == -1) {
                indice = i;
            }
        }
    }

    printf("Indice: %d\n", indice);
    printf("Frequencia: %d\n", frequencia);

    for(i = 14; i >= 0; i--) {
        printf("%d ", vetor[i]);
    }

    return 0;
}