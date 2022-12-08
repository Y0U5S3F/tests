#include<stdio.h>
#include<string.h>

int apar(char str[]);
void chargement(char s[],char tab[][10]);
void affichage(char tab[][10]);

int main(void){
    char s[50],tab[50][10];
    do{
        printf("donner la phrase: ");
        scanf("%s", s);
    }while(4==apar(s));
    chargement(s,tab);
    affichage(tab);
}

void chargement(char s[],char tab[][10]){
    int j,i;
 
    for(i=0;i<5;i++){
        scanf("%s", tab[i]);
    }
    
}

void affichage(char tab[][10]){
    int i;
    for(i=0;i<5;i++){
        printf("%s ",tab[i]);
    }
}

int apar(char str[]){
    int i,b=0;
    for(i=0;i<strlen(str);i++){
        if(str[i]==' '){
            b++;
        }
    }
    return b;
}