#include<stdio.h>
#include<string.h>
void main(){
    char a[20],b[20],c[40];
    int i,x,y;
    printf("donner Ch1");
    scanf("%s",&a);
    printf("donner Ch2");
    scanf("%s",&b);
    x=strlen(a);
    y=strlen(b);
    if(0>strcmp(b,a)){
        printf("%s est plus grande que %s",a,b);
    }
    if(0<strcmp(b,a)){
        printf("%s est plus grande que %s",b,a);
    }
    else{
        printf("les deux chaines sont les memes");
    }
}