#include <stdio.h>
int i=3;
int S[101]={};

int recursive(int n){
    if (i<n)
    {
        S[i]= S[i-1] + S[i-2] + S[i-3];
        recursive(i++);
    }
    if(i>n){
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
    int S = recursive(n);
    printf("%d",S);
    return 0;
}