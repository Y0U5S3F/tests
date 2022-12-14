#include<stdio.h>

int main(void){
    int n=7,u2,i,u=1,u1=1,aux;
    u2=u+u1;
    for(i=1;i<n;i++){
        aux=u1;
        u1=u2;
        u=aux;
        u2=u1+u;
    }
    printf("%d",u);
    return 0;
}