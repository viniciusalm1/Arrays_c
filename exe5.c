#include <stdio.h>
#include <string.h>

#define MAX 10

char nomes[MAX][50];
char fones[MAX][20];
int total = 0;

int main() {
    int opcao, i, pos;
    char nome[50];

    do {
        scanf("%d", &opcao);
        getchar();

        if(opcao == 1) {
            fgets(nomes[total], 50, stdin);
            nomes[total][strcspn(nomes[total], "\n")] = '\0';

            fgets(fones[total], 20, stdin);
            fones[total][strcspn(fones[total], "\n")] = '\0';

            total++;
        }

        else if(opcao == 2) {
            for(i = 0; i < total; i++) {
                printf("%s - %s\n", nomes[i], fones[i]);
            }
        }

        else if(opcao == 3) {
            fgets(nome, 50, stdin);
            nome[strcspn(nome, "\n")] = '\0';

            pos = -1;

            for(i = 0; i < total; i++) {
                if(strcmp(nomes[i], nome) == 0) {
                    pos = i;
                    break;
                }
            }

            printf("Posicao: %d\n", pos);
        }

        else if(opcao == 4) {
            fgets(nome, 50, stdin);
            nome[strcspn(nome, "\n")] = '\0';

            for(i = 0; i < total; i++) {
                if(strcmp(nomes[i], nome) == 0) {
                    strcpy(nomes[i], nomes[total - 1]);
                    strcpy(fones[i], fones[total - 1]);
                    total--;
                    break;
                }
            }
        }

    } while(opcao != 5);

    return 0;
}