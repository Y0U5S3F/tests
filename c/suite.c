#include<stdio.h>
#include <stdlib.h>

int main()
{
    int aux,n,t;
    scanf("%d",&n);
    aux=n;
    do{
        printf("%d ",n);
        t=0;
        do{
            t=t+(n%10)*(n%10);
            n/=10;
        }while(n!=0);
        n=t;
    }while(n!=aux);
}