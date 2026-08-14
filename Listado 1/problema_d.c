#include <stdio.h>
#include <math.h>

int main(){
    double x;
    int result;
    scanf("%lf",&x);

    //se trabaja la conversion
    double numero_conversion= 1000.0*(5280.0/4854);
    result= round(x*numero_conversion);

    //imprime el resultado
    printf("%d",result);
    return 0;
}