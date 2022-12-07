#include<stdio.h>
#include<string.h>
int main(void){
    int x,i;
    char nam[25];
    printf("donner esmek: ");
    fgets(nam, 25,stdin);
    printf("\nbonjour %s",nam);
    x=strlen(nam)-1;
    for(i=0;i<strlen(nam);i++){
        if(nam[i]==' '){
            x--;
        }
    }
    printf("\nle nom est compose de %d characteres ",x);
    return 0;
}