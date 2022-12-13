#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int saisir(void);
void remplir(float T[], int n);
void affichage(float T[], int n);
void masse_corp(float Ta[],float Ma[], int n);
void moyenne(float Ta[],float Ma[], int n);

int main(void){
    int n;
    float Ta[50],Ma[50];
    n=saisir();
    remplir(Ta,n);
    affichage(Ta,n);
    printf("%d",n);
    remplir(Ma,n);
    moyenne(Ta,Ma,n);
    masse_corp(Ta,Ma,n);
    return 0;

}

int saisir(void){
    int number;
    do{
        printf("Enter a number less than 50: ");
        scanf("%d", &number);
    }while(number>=50);
    return number;
}

void remplir(float T[], int n){
    int i;
    for(int i=0; i<n; i++){
        do{
            printf("donner T[%d]: ", i);
            scanf("%f", &T[i]);
        }while(T[i]<0);

    }
}

void affichage(float T[], int n){
    int i;
    for(int i=0; i<n; i++){
        printf("%f\n", T[i]);
    }
}

void moyenne(float Ta[],float Ma[], int n){
    int i;
    float sommet=0,sommem=0;
    for(int i=0; i<n; i++){
        sommet+=Ta[i];
        sommem+=Ma[i];
    }
    printf("la moyenne des tailles est %f et la somme des masses est %f\n", sommet, sommem);
}

void masse_corp(float Ta[],float Ma[], int n){
    int i;
    for(int i=0; i<n; i++){
        float m=Ma[i]/(Ta[i]*Ta[i]);
        if(m<18.5){
            printf("individue %d : taille=%f masse=%f IMC=%f: pas assez\n",i,Ta[i],Ma[i],m);
        }
        else if(m>25){
            printf("individue %d : taille=%f masse=%f IMC=%f: trop\n",i,Ta[i],Ma[i],m);
        }
        else{
            printf("individue %d : taille=%f masse=%f IMC=%f: normal\n",i,Ta[i],Ma[i],m);
        }
    }
}