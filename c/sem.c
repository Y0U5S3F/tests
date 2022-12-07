#include<stdio.h>
int main(void){
    int x;
    char T[10][7] = {"lundi","mardi","mercredi","jedi","vendredi","samedi","dimanche"};
    printf("donner le nombre");
    scanf("%d",&x);
    if(1<=x && x<=7){
        printf("le jour est %s",T[][x]);
    }
    else{
        printf("erreur");
    }

}