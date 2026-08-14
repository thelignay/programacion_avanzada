#include <stdio.h>
#include <string.h>

int get_value(char *s){
    int suma=0;
    for(int i=0;s[i];i++) suma+=s[i];
    return suma;
}

int main(){
    int n=1;
    int n_set=1;
    while (n!=0)
    {
        scanf("%d", &n);
        if(n==0){
            break;
        }
        printf("SET %d\n",n_set);

        //guardar los string en vertical en arreglos que varian en Y con i
        char matriz[16][26];
        for(int i=0;i<n;i++){  
            scanf(" %s", matriz[i]);
            //printf("%s\n", matriz[i]); -debugg
            //copiar i=2 en i=16
            //tomar i=1 y llevarlo a n-1

        }

        char matriz_nueva[16][26];
        int izq = 0;
        int der = n - 1;

        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                strcpy(matriz_nueva[izq], matriz[i]);
                izq++;
            } else {
                strcpy(matriz_nueva[der], matriz[i]);
                der--;
            }
        }
        
        for(int i=0;i<n;i++){
            printf("%s\n", matriz_nueva[i]);
        }
        n_set++;
    }
    
    return 0;
}