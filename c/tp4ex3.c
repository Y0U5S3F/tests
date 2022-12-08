#include<stdio.h>
#include<string.h>
/*void main(){
    char a[20],b[20],c[40];
    int x,y,i,j;
    printf("donner Ch1");
    scanf("%s",&a);
    printf("donner Ch2");
    scanf("%s",&b);
    x=(strlen(a)/2);
    y=(strlen(b)/2);
    for(i=0;i<=x;i++){
        c[i]=a[i];
    }
    for(j=y/2+1,i=0;j<strlen(b);j++,i++){
        c[j]=b[i];
    }
    printf("%s",c);
}*/
void main(){
    char ch1[40],ch2[40],ch3[20],ch4[20];
    int x,y,z;
    puts("donner ch1");
    fgets(ch1,20,stdin);
    puts("donner ch2");
    fgets(ch2,20,stdin);
    x=strlen(ch1)/2;
    y=strlen(ch2)/2;
    strncpy(ch3,ch1,x);
    strncpy(ch4,ch2,y);
    puts(strcat(ch3,ch4));
}