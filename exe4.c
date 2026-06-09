#include <stdio.h>

#define DIAS 7
#define PERIODOS 3

int main() {
    float temp[DIAS][PERIODOS];
    float soma, maior;
    int i, j, diaQuente = 0;
    float maiorMedia;

    for(i = 0; i < DIAS; i++) {
        for(j = 0; j < PERIODOS; j++) {
            scanf("%f", &temp[i][j]);
        }
    }

    maior = temp[0][0];

    for(i = 0; i < DIAS; i++) {
        soma = 0;

        for(j = 0; j < PERIODOS; j++) {
            soma += temp[i][j];

            if(temp[i][j] > maior)
                maior = temp[i][j];
        }

        printf("Dia %d Media: %.2f\n", i + 1, soma / PERIODOS);

        if(i == 0) {
            maiorMedia = soma / PERIODOS;
        } else if((soma / PERIODOS) > maiorMedia) {
            maiorMedia = soma / PERIODOS;
            diaQuente = i;
        }
    }

    printf("Maior: %.1f\n", maior);
    printf("Dia mais quente: %d\n", diaQuente + 1);

    for(i = 0; i < DIAS; i++) {
        for(j = 0; j < PERIODOS; j++) {
            printf("%.1f ", temp[i][j]);
        }
        printf("\n");
    }

    return 0;
}