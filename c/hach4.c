#include<stdio.h>
#include<string.h>
int main(void){
    int i;
    char ver[20],x[20];
    do{
        printf("donner un verbe ");
        fgets(ver,20,stdin);
        i=strlen(ver);
    }while((ver[i-2]!='r')&&(ver[i-3]!='e'));
    strncpy(x,ver,strlen(ver)-3);
    printf("je %se  tu %ses  it %se  nous %sons  vous %sez  ils %sent",x,x,x,x,x,x);
    return 0;
}