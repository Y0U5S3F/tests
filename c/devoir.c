//Youssef Saidani TD3 TP6
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void affichage(int Tb[],int n);
void tab_fibo(int Tf[],int Tb[],int n);
void remplir(int Tf[],int n);
int fibo(int n);
int saisir();

int main(void){
    int x,n,Tf[50],Tb[50];
    n=saisir();
    remplir(Tf,n);
    tab_fibo(Tf,Tb,n);
    affichage(Tb,n);
    return 0;
}

int saisir(){
    int n;
    do{
        printf("donner N :");
        scanf("%d",&n);
    }while(!(3<n && n<=10));
    return n;
}

int fibo(int n){
    int u2,i,u=1,u1=1,aux;
    u2=u+u1;
    for(i=3;i<n;i++){
        aux=u1;
        u1=u2;
        u=aux;
        u2=u1+u;
    }
    return u2;
}

void remplir(int Tf[],int n){
    int i;
    for(i=0;i<n;i++){
        do{
            printf("donner T[%d]: ",i);
            scanf("%d",&Tf[i]);
        }while(!(Tf[i]>2));
    }
}

void tab_fibo(int Tf[],int Tb[],int n){
    int i;
    for(i=0;i<n;i++){
        Tb[i]=fibo(Tf[i]);
    }
}

void affichage(int Tb[],int n){
    int i,moy=0,m=0;
    for(i=1;i<n;i+=2){
        moy+=Tb[i];
        m++;
    }
    printf("la moyenne des indices impair est: %d",(moy/m));
}