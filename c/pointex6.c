#include<stdio.h>
int main(){
    int a[50],b[50],x=1,n;
    int *p1,*p2;
    printf("donner n ");
    scanf("%d",&n);
    for(p1=a;p1<a+n;p1++){
        printf("donner A[%ld] ",p1-a);
        scanf("%d",p1);
    }
    for(p2=b;p2<b+n;p2++){
        printf("donner B[%ld] ",p2-b);
        scanf("%d",p2);
    }
    p1=a;
    p2=b;
    while(x==1){
        if(*p1!=*p2){
            x=0;
        }
        p1++;
        p2++;
    }
    printf("%d",x);
    return 0;
}