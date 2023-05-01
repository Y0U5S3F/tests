#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char ch[50];
    printf("donner la chaine 1 ");
    scanf("%s",ch);
    char *pch1 = malloc(strlen(ch)+1);
    strcpy(pch1, ch);
    printf("donner la chaine 2 ");
    scanf("%s",ch);
    char *pch2 = malloc(strlen(ch)+1);
    strcpy(pch2, ch);
    printf("%s %s ",pch1,pch2);
    free(pch1);
    free(pch2);
    return 0;
}