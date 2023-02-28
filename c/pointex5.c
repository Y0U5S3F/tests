#include<stdio.h>
int main(){
    int a[50],n,ax;
    int *p1,*p2;
    printf("donner la taille: ");
    scanf("%d",&n);
    for(p1=a;p1<a+n;p1++){
        printf("donner T[%ld]: ",p1-a);
        scanf("%d",p1);
    }
    for(p1=a,p2=a+n-1;p1<p2;p1++,p2--){
        ax=*p2;
        *p2=*p1;
        *p1=ax;
    }
    for(p1=a;p1<a+n;p1++){
        printf("T[%ld]:%d\n",p1-a,*p1);
    }
}