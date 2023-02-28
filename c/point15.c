#include<stdio.h>
int main(){
    int x,y;
    int * p1=&x,p2=&y;
    printf("donner x");
    scanf("%d",p1);
    printf("donner y");
    scanf("%d",p2);
    if(*p2<*p1){
        printf("%d of address %d",*p1,p1);
    }
    else{
        printf("%d of adress %d",*p2,p2);
    }
}