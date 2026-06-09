#include <stdio.h>

int main() {
    float notas[10];
    float soma = 0, maior, menor, media;
    int i;

    for(i = 0; i < 10; i++) {
        printf("Digite a nota %d: ", i + 1);
        scanf("%f", &notas[i]);

        soma += notas[i];

        if(i == 0) {
            maior = menor = notas[i];
        } else {
            if(notas[i] > maior)
                maior = notas[i];

            if(notas[i] < menor)
                menor = notas[i];
        }
    }

    media = soma / 10;

    printf("\nMedia: %.2f", media);
    printf("\nMaior nota: %.2f", maior);
    printf("\nMenor nota: %.2f", menor);

    return 0;
}