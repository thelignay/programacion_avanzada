#include <stdio.h>

int main(){
    int n,m;
    scanf(" %d %d", &n, &m);
    char matriz[n][m];

    //contador
    int t=1;

    //guardar matriz con los char '_' y '$'
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf(" %c", &matriz[i][j]);
            //printf("%c", matriz[i][j]); -debug
        }
        //printf("\n"); -debug
    }
    
    for(int j=0;j<m;j++){
        //recorre vertical
        int bandera=1;
        for(int i=0;i<n;i++){
            if(matriz[i][j]=='$'){
                bandera=0;
            }
            //printf("%c\n",matriz[i][j]); -debugg
        }
        if(bandera){
            t++;
        }
        //printf("\n"); -debugg
    }
    
    printf("%d",t);
    return 0;
}
//hay que leer columnas con puros '_' y sumar uno a t