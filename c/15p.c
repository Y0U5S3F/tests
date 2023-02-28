#include<stdio.h>
#include<stdlib.h>
int main(){
    int x,y;
    int* p1=&x,p2=&y;
    printf("donner a");
    scanf("%d",p1);
    printf("donner b");
    scanf("%d",p2);
    if(*p1<*p2){
        printf("%d of the adress %ld",*p2,p2)
    }
    else{
        printf("%d of the adress %ld",*p1,p1)
    }
}