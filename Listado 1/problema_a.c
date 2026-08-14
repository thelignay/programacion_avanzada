#include <stdio.h>
#include <math.h>

int main(){
    long long a;
    double l;
    double perimetro;

    scanf("%lld",&a);

    l=sqrt((double)a);
    perimetro = 4.0*l;

    printf("%.6lf\n", perimetro);
    return 0;
}

