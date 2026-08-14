#include <stdio.h>
#include <math.h>

int main(){
    int r,c;
    scanf("%d %d",&r, &c);         
    double v_total= 3.14*r*r;
    double v_corteza= 3.14 * (r-c)*(r-c);
    double v_no_queso= (v_corteza/v_total)*100;
    printf("%.6f",v_no_queso);
    return 0;
}