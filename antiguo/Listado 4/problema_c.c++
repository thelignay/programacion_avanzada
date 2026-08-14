#include <iostream>
#include <vector>

using namespace std;

// Variable global para poder imprimir el arreglo completo de tamaño N
// en cada paso de la recursión tal como lo pide el juez
int TOTAL_N;

// Función auxiliar para imprimir el estado completo del arreglo
void imprimirArreglo(const vector<int>& ar) {
    for (int i = 0; i < TOTAL_N; i++) {
        cout << ar[i] << (i == TOTAL_N - 1 ? "" : " ");
    }
    cout << "\n";
}

// Función de partición de Lomuto
int partition(vector<int>& ar, int low, int high) {
    int pivot = ar[high]; // Regla: Siempre seleccionar el último como pivote
    int i = low;          // Rastreador de la frontera de elementos menores
    
    for (int j = low; j < high; j++) {
        // Si el elemento actual es menor que el pivote, se mueve a la izquierda
        if (ar[j] < pivot) {
            swap(ar[i], ar[j]);
            i++;
        }
    }
    // Colocamos el pivote en su posición correcta definitiva
    swap(ar[i], ar[high]);
    
    // Regla: Imprimir TODO el arreglo al terminar el método de partición
    imprimirArreglo(ar);
    
    return i; // Retorna la posición del pivote
}

// Algoritmo Quicksort In-place
void quickSort(vector<int>& ar, int low, int high) {
    // Caso base: un arreglo de longitud 1 o menos no necesita ordenarse
    if (low < high) {
        // P_idx es la posición donde quedó el pivote de forma fija
        int p_idx = partition(ar, low, high);
        
        // Regla: Particionar el lado izquierdo y luego el derecho
        quickSort(ar, low, p_idx - 1);
        quickSort(ar, p_idx + 1, high);
    }
}

int main() {
    // Desactivar la sincronización de I/O para mayor velocidad en el Juez Virtual
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    if (cin >> n) {
        TOTAL_N = n; // Guardamos el tamaño original en la variable global
        vector<int> ar(n);
        
        for (int i = 0; i < n; i++) {
            cin >> ar[i];
        }
        
        // Ejecutamos Quicksort in-place en todo el rango del vector
        quickSort(ar, 0, n - 1);
    }
    
    return 0;
}