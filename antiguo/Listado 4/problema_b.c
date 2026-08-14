#include <stdio.h>
#include <string.h>

//sumar solo un digito y repetir hasta que el numero solo tenga un digito
long long SuperDigit(long long numero) {
    if (numero < 10) {
        return numero;
    }
    long long suma_digitos = 0;
    while (numero > 0) {
        suma_digitos += numero % 10;//se suma un numero de solo un digito
        numero /= 10;//se le quita el digito sumado
    }
    return SuperDigit(suma_digitos);
}

int main() {
    char n[100005];
    int k;
    scanf("%s %d", n, &k);
    //sumar los digitos de la cadena inicial
    long long suma_inicial = 0;
    int largo = strlen(n);

    for (int i = 0; i < largo; i++) {
        suma_inicial += (n[i] - '0');
    }
    long long suma_total = suma_inicial * k;//primer numero multiplicado por k veces es lo mismo que ese numero repetido k veces
    long long resultado_final = SuperDigit(suma_total);//lo resultante de lo anterior pero hasta que tenga solo un digito

    // Imprimir el unico digito obtenido
    printf("%lld\n", resultado_final);

    return 0;
}