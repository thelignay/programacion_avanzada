#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
    char s[101];
    scanf("%100s", s);

    int n = strlen(s);
    int r = 1, c = 1;
    for (int i = (int)sqrt(n); i >= 1; i--) {
        if (n % i == 0) {
            r = i;
            c = n / i;
            break;
        }
    }

    char matriz[r][c];
    int k = 0;
    //leer por columnas
    for (int j = 0; j < c; j++) {
        for (int i = 0; i < r; i++) {
            matriz[i][j] = s[k++];
        }
    }
    //imprimir por filas
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            putchar(matriz[i][j]);
        }
    }
    printf("\n");
    return 0;
}