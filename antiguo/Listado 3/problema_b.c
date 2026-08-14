#include <stdio.h>

int main() {
    int H, W, N, M;
    if (scanf("%d %d %d %d", &H, &W, &N, &M) != 4) return 0;

    int imagen[20][20];
    int kernel[20][20];
    int funcion_girado[20][20];

    // 2. Leer la matriz
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            scanf("%d", &imagen[i][j]);
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            int valor;
            scanf("%d", &valor);
            funcion_girado[N - 1 - i][M - 1 - j] = valor;
        }
    }

    // Los limites son H-N+1 y W-M+1
    for (int i = 0; i <= H - N; i++) {
        for (int j = 0; j <= W - M; j++) {
            int suma = 0;
            
            for (int ki = 0; ki < N; ki++) {
                for (int kj = 0; kj < M; kj++) {
                    suma += imagen[i + ki][j + kj] * funcion_girado[ki][kj];
                }
            }
            
            printf("%d", suma);
            if (j < W - M) printf(" ");
        }
        printf("\n");
    }

    return 0;
}