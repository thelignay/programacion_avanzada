#include <stdio.h>
int S[101]={};

int recursive(int i,int n){
    if (i<=n)
    {
        S[i]= S[i-1] + S[i-2] + S[i-3];
        return recursive(++i, n);
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
    S[0]=a;
    S[1]=b;
    S[2]=c;
    int i=3;
    int Suma = recursive(i,n);
    printf("%d",Suma);
    return 0;
}