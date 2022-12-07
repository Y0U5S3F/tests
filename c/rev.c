#include<stdio.h>
void main(){
    int T[] = {1,2,3,4,5,6,7,8,9},aux,i,j;
    for(i=0,j=9-1;i<(9/2);i++,j--){
        aux=T[i];
        T[i]=T[j];
        T[j]=aux;
    }
    for(i=0;i<9;i++){
        printf("%d ",T[i]);
    }
}