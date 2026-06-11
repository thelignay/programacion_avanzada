#include <stdio.h>
#include <string.h>

int calcular_potencia(int base, int exp) {
    int resultado = 1;
    for (int i = 0; i < exp; i++) {
        resultado *= base;
    }
    return resultado;
}

int powerSum(int X, int N, int actual_i){
    //si nuestro numero es 0 terminamos la funcion
    if (X == 0) {
        return 1;
    }
    int potencia = calcular_potencia(actual_i, N);

    //para q no de segmentacion fault hay q limitar la potencia para que pare cuando pase a X
    if (potencia > X || X < 0) {
        return 0;
    }

    //recordar que powerSum recive(numero a evaluar,n potencia, numero actual) asi que hay dos caminos:
    // Camino 1: Tomamos la potencia actual (restamos su valor a X y avanzamos al siguiente entero)
    int tomar = powerSum(X - potencia, N, actual_i + 1);
    // Camino 2: Ignoramos la potencia actual (X queda igual y avanzamos al siguiente entero)
    int ignorar = powerSum(X, N, actual_i + 1);
    return tomar + ignorar;
}

int main(){
    int x;
    int n;
    scanf("%d", &x);
    scanf("%d", &n);
    int result= powerSum(x,n,1);
    printf("%d\n", result);
    return 0;
}