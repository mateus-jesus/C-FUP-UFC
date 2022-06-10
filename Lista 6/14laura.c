#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    char nomes[5][5], nome[55];
    float altura[5];
    int sexo[5], aux1, aux2;
    for(int i = 0; i < 5; i++) {
        do {
            printf("Insira a altura da %ia. pessoa em metros: ", i + 1);
            scanf("%f", &altura[i]);
        } while (altura[i] < 0.5 || altura[i] > 2.5);
        do {
            printf("Insira o código do sexo da %ia. pessoa (1 - masculino e 2 - feminino): ", i + 1);
            scanf("%i", &sexo[i]);
        } while (sexo[i] != 1 && sexo[i] != 2);
        nome[i] = '@';
        for(int k = 0; k < 5; k++) {
            nomes[i][k] = '@';
        }
    }
    for(int l = 0; l < 5; l++) {
        for(int h = l + 1; h < 5; h++) {
            if (altura[l] > altura[h]) {
                aux1 = altura[l];
                aux2 = sexo[l];
                altura[l] = altura[h];
                sexo[l] = sexo[h];
                altura[h] = aux1;
                sexo[h] = aux2;
            }
        }
    }
    for(int j = 0; j < 5; j++) {
        printf("Insira o nome da %ia. pessoa: ", j + 1);
        scanf("%s", nome);
        for(int k = 0; k < 5; k++) {
            if (nome[k] != '@') {
                nomes[j][k] = nome[k];
            }
            else {
                for(int i = 0; i < 5; i++) {
                    nome[i] = '@';
                }
                break;
            }
        }
    }

    for(int m = 0; m < 5; m++) {
        printf("Altura: %1.2f metros, Código do sexo: %i, ", altura[m], sexo[m]);
        for(int n = 0; n < 5; n++) {
            if (nomes[m][n] != '@') {
                printf("%c", nomes[m][n]);
            }
            else {
                printf("\n");
                break;
            }
        }
    }
    return 0;
}
