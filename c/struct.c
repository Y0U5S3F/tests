#include<stdio.h>
#include<stdlib.h>
#include<math.h>

typedef struct point {
    int x,y;
} point;

int main(){
    struct point a,b;
    printf("donner X de a ");
    scanf("%d",&a.x);
    printf("donner Y de a ");
    scanf("%d",&a.y);
    printf("donner X de b ");
    scanf("%d",&b.x);
    printf("donner Y de b ");
    scanf("%d",&b.y);
    printf("the distance is %f ",sqrt(pow((a.x-b.x),2)+pow((a.y-b.y),2)));
    return 0;
}