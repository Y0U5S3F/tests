#include<stdio.h>
int main(){
    int a[50],n,x;
    int *p1,*p2;
    printf("donner la taille: ");
    scanf("%d",&n);
    for(p1=a;p1<a+n;p1++){
        printf("donner T[%ld]: ",p1-a);
        scanf("%d",p1);
    }
    printf("donner l'entier a supprimer ");
    scanf("%d",&x);
    p2=a;
    for(p1=a;p1<a+n;p1++){
        *p2=*p1;
        if(*p2!=x){
            p2++;
            printf("T[%ld]:%d \n",p2-a,*p2);
        }
    }
}