#include<stdio.h>
void main(){
    int h,m,s;
    printf("donner un nombre des heures, minutes et secondes\n");
    scanf("%i",&h);
    scanf("%i",&m);
    scanf("%i",&s);
    if(s>=60 || m>=60 || h>=24){
        printf("temps invalide\n");
    }
    else{
        s++;
        if(s==60){
        m++;
        s=0;
        }
    if(m==60){
        h++;
        m=0;
        }
    if(h==24){
        h=0;
        m=0;
        s=0;
        }
    printf("il est %i heure(s) %i minute(s) %i seconde(s)",h,m,s);
    }
}