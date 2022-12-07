#include<stdio.h>

int main(){
    float m;
    int n,p=1,i,x,c=0;
    printf("donner n\n");
    scanf("%d",&n);
    /*while(c<n){
        printf("donner un nombre ");
        scanf("%i",&i);
        x=x+i;
        p=p*i;
        c++;
    }*/
    do{
        printf("donner un nombre ");
        scanf("%i",&i);
        x=x+i;
        p=p*i;
        c++;
    }while(c<n);
    /*for(c=0;c<n;c++){
        printf("donner un nombre ");
        scanf("%i",&i);
        x=x+i;
        p=p*i;
    }*/
    m=(float)x/n;
    printf("la somme est %d \n",x);
    printf("le produit est %d \n",p);
    printf("la moyenne est %f ",m);
    return 0;
}
