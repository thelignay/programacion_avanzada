#include <stdio.h>
int S[101]={};

int recursive(int i,int n){
    if(n==1){return S[1];}
    if(n==2){return S[2];}
    if(n==3){return S[3];}

    if (i<=n)
    {
        S[i]= S[i-1] + S[i-2] + S[i-3];
        return recursive(i+1, n);
    }
    else{
        return S[n];
    }  
}

int main(){
    int n;
    int a,b,c;

    scanf("%d",&n);
    scanf("%d %d %d",&a,&b,&c);

    S[1]=a;
    S[2]=b;
    S[3]=c;

    int i=4;
    int Suma = recursive(i,n);
    printf("%d",Suma);
    return 0;
}