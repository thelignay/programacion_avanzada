#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    int buses[1000];
    for (int i = 0; i < n; i++) {
        scanf("%d", &buses[i]);
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (buses[j] > buses[j + 1]) {
                int temp = buses[j];
                buses[j] = buses[j + 1];
                buses[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        int inicio = i;
        

        while (i + 1 < n && buses[i+1] == buses[i] + 1) {
            i++;
        }
        int cantidad = i - inicio + 1;

        if (cantidad >= 3) {
            printf("%d-%d", buses[inicio], buses[i]);
        }
        else if (cantidad == 2) {
            printf("%d %d", buses[inicio], buses[i]);
        } 
        else {
            printf("%d", buses[inicio]);
        }

        if (i < n - 1) {
            printf(" ");
        }
    }
    printf("\n");
    return 0;
}