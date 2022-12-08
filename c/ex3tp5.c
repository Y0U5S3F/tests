#include<stdio.h>
#include<string.h>

int apar(char str[],char n);

int main(void){
    char str[50],n;
    printf("donner la chaine: ");
    scanf("%s",str);
    printf("donner le charactere a chercher ");
    scanf(" %c",&n);
    printf("le nombre d'apparirion est %d",apar(str,n));
    return 0;
}

int apar(char str[],char n){
    int i,b=0;
    for(i=0;i<strlen(str);i++){
        if(str[i]==n){
            b++;
        }
    }
    return b;
}
