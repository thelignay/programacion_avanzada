#include <stdio.h>

int w=0, l=0;
//el robot puede caminar por las esquinas de (0,0) a (w-1,L-1)
int n=0;

int main() 
{
    
    int bandera =1;
    while(bandera){
        scanf("%d %d",&w, &l);
        scanf("%d",&n);
        if(w==0 && l==0){
            bandera=0; 
            break;
        } 
            
        //int habitacion[w][l]= {};
        char dire;
        int cant;

        //pos inicial
        int x=0,y=0;
        int x_r=0,y_r=0;
        //int i=0,j=0;
        for(int a=0;a<n;a++){
            //for(int i=0;i<w;i++){
                //for(int j=0;j<l;j++){
                    //printf("%d",habitacion[i][j]);
                    scanf(" %c",&dire);
                    scanf("%d", &cant);
                    switch (dire)
                    {
                    case 'u':
                        y_r= (1*cant) + y_r;
                        if(((1*cant) + y)>l-1){
                            y=l-1;
                        }
                        else{
                            y=(1*cant)+y;
                        }

                        break;
                    
                    case 'r':
                        x_r= (1*cant) + x_r;
                        if(((1*cant) + x)>w-1){
                            x=w-1;
                        }
                        else{
                            x=(1*cant)+x;
                        }
                        break;
                    case 'l':
                        x_r= (-1*cant) + x_r;
                        if(((-1*cant) + x)<0){
                            x=0;
                        }
                        else{
                            x=(-1*cant)+x;
                        }
                        break;
                    case 'd':
                        y_r= (-1*cant) + y_r;
                        if(((-1*cant) + y)<0){
                            y=0;
                        }
                        else{
                            y=(-1*cant)+y;
                        }
                        break;
                    }

                //}
                //printf("\n");
            //}   
        }
        printf("Robot thinks %d %d\n", x_r, y_r);
        printf("Actually at %d %d\n", x, y);
        printf("\n");
    }
    return 0;
}