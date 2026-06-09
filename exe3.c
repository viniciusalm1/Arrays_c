#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char nomes[5][50];
    char busca[50];
    char temp[50];
    int i, j, indice = -1;

    for(i = 0; i < 5; i++) {
        fgets(nomes[i], 50, stdin);
        nomes[i][strcspn(nomes[i], "\n")] = '\0';

        for(j = 0; nomes[i][j] != '\0'; j++) {
            nomes[i][j] = toupper(nomes[i][j]);
        }
    }

    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4 - i; j++) {
            if(strcmp(nomes[j], nomes[j + 1]) > 0) {
                strcpy(temp, nomes[j]);
                strcpy(nomes[j], nomes[j + 1]);
                strcpy(nomes[j + 1], temp);
            }
        }
    }

    fgets(busca, 50, stdin);
    busca[strcspn(busca, "\n")] = '\0';

    for(i = 0; busca[i] != '\0'; i++) {
        busca[i] = toupper(busca[i]);
    }

    for(i = 0; i < 5; i++) {
        if(strcmp(nomes[i], busca) == 0) {
            indice = i;
            break;
        }
    }

    printf("Resultado: %d\n", indice);

    return 0;
}