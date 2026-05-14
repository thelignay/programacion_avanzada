#include <stdio.h>
#include <string.h>

int main() {
    int n;
    char antes[1001], despues[1001];
    scanf("%d", &n);
    scanf("%s", antes);
    scanf("%s", despues);

    int largo = strlen(antes);
    int bandera = 1;

    for (int i = 0; i < largo; i++) {
        if (n % 2 == 0) {
            // Si N es par
            if (antes[i] != despues[i]) {
                bandera = 0;
                break;
            }
        } else {
            // Si N es impar:
            if (antes[i] == despues[i]) {
                bandera = 0;
                break;
            }
        }
    }

    // Salida según el resultado
    if (bandera) {
        printf("Deletion succeeded\n");
    } else {
        printf("Deletion failed\n");
    }

    return 0;
}