#include<stdio.h>
int main(){
    int x=5;
    int * pX=&x;
    printf("la valeur de x est %d\n",x);
    printf("adresse de x est %d",&x);
    printf("la valeur de p est %d",pX);
    printf("adresse de p est %d",&pX);
    printf("la valeur lequel p pointe est %d",*pX);
    return 0;
}