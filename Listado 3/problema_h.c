#include <stdio.h>
#include <string.h>

//algoritmo buble sort
void ordenar_posiciones(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void resolver() {
    char grid[105][85];      
    int posicion_estrella[85]; 
    char line[150];          
    int first_log = 1;

    // Leemos línea por línea hasta el fin del archivo (EOF) [cite: 21]
    while (fgets(line, sizeof(line), stdin)) {
        if (line[0] == '\n' || line[0] == '\r') continue;

        int rows = 0;
        int cols = strlen(line);
        
        // Limpiamos los saltos de línea al final del string leido
        if (line[cols - 1] == '\n') line[--cols] = '\0';
        if (line[cols - 1] == '\r') line[--cols] = '\0';

        // Guardamos la primera fila y leemos las siguientes que forman el bloque
        strcpy(grid[rows++], line);
        while (fgets(line, sizeof(line), stdin) && line[0] != '\n' && line[0] != '\r') {
            int len = strlen(line);
            if (line[len - 1] == '\n') line[--len] = '\0';
            if (line[len - 1] == '\r') line[--len] = '\0';
            strcpy(grid[rows++], line);
        }

        // Paso 1: Encontrar la fila del '*' en cada columna original [cite: 19]
        for (int j = 0; j < cols; j++) {
            for (int i = 0; i < rows; i++) {
                if (grid[i][j] == '*') {
                    posicion_estrella[j] = i;
                    break;
                }
            }
        }

        // Paso 2: Ordenar las posiciones encontradas de mayor a menor 
        // (Los valores más altos en índice de fila están físicamente más abajo)
        ordenar_posiciones(posicion_estrella, cols);

        // Imprimir una línea en blanco entre logs (excepto antes del primero) [cite: 24]
        if (!first_log) printf("\n");
        first_log = 0;

        // Paso 3: Imprimir el nuevo log ordenado [cite: 23]
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                // Si la fila actual coincide con la guardada para esta columna, ponemos '*'
                if (posicion_estrella[j] == i) {
                    putchar('*');
                } else {
                    putchar('.');
                }
            }
            putchar('\n');
        }
    }
}

int main() {
    resolver();
    return 0;
}