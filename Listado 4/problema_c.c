#include <stdio.h>
int TOTAL_N;

//funcion para imprimir el estado completo del arreglo
void imprimirArreglo(int ar[]) {
    for (int i = 0; i < TOTAL_N; i++) {
        printf("%d", ar[i]);
        if (i < TOTAL_N - 1) {
            printf(" ");
        }
    }
    printf("\n");
}

int partition(int ar[], int low, int high) {
    int pivot = ar[high]; //elegir siempre el ultimo elemento como pivote
    int i = low;//para encontrar numeros menores  
    int temp;
    
    for (int j = low; j < high; j++) {
        if (ar[j] < pivot) {
            temp = ar[i];
            ar[i] = ar[j];
            ar[j] = temp;
            i++;
        }
    }
    temp = ar[i];
    ar[i] = ar[high];
    ar[high] = temp;
    
    //imprimir tdo el arreglo al terminar cada particion
    imprimirArreglo(ar);
    return i;//lugar pivote
}
void quickSort(int ar[], int low, int high) {
    if (low < high) {
        int p_idx = partition(ar, low, high);
        //particionar el lado izquierdo y luego el lado derecho
        quickSort(ar, low, p_idx - 1);
        quickSort(ar, p_idx + 1, high);
    }
}

int main() {
    //tam arreglo
    int n;
    scanf("%d", &n);
    TOTAL_N = n;
    int ar[5005];
    for (int i = 0; i < n; i++) {
        scanf("%d", &ar[i]);
    }
    quickSort(ar, 0, n - 1);
    return 0;
}