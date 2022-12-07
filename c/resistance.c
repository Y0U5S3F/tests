#include<stdio.h>
#include<ctype.h>
void main(){
    char ch;
    double r,r1,r2,r3;
    printf("donner R1, R2 et R3\n");
    scanf("%lf",&r1);
    scanf("%lf",&r2);
    scanf("%lf",&r3);
    printf("serie walla asba y/n ");
    scanf(" %c", &ch);
    if(ch=='y'){
        r=r1+r2+r3;
    }
    else{
        r=((r1*r2*r3)/(r1*r2)+(r1*r1)+(r2*r3));
    }
    printf("la resistance totale est: %lf",r);
}