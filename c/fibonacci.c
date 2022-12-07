#include<stdio.h>
void main(){
    int n,i,z,x=1,y=1,u;
    printf("donner n\n");
    scanf("%i",&n);
    for(i=1;i<n;i++){
    z=x+y;
    x=y;
    y=z;
    }
    printf("la somme de la suite est %d",z);
}