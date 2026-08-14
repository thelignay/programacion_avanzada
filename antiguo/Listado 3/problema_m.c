#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;
    scanf("%d", &N);
    int *gis = (int *)malloc(sizeof(int) * N);
    int contador = 0;
    int current_max = -1;

    for (int i = 0; i < N; i++) {
        int valor;
        scanf("%d", &valor);

        if (valor > current_max) {
            gis[contador] = valor;
            current_max = valor;
            contador++;
        }
    }

    // Salida según el formato solicitado:
    // 1. Longitud del GIS[cite: 2004].
    printf("%d\n", contador);

    // 2. Elementos del GIS[cite: 2004].
    for (int i = 0; i < contador; i++) {
        printf("%d%c", gis[i], (i == contador - 1 ? '\n' : ' '));
    }

    free(gis);
    return 0;
}