#include<stdio.h>
#include<ctype.h>
void main(int){
    int n,s;
    char g;
    printf("donner la categorie\n");
    scanf("%c",&g);
    //g=toupper(g);
    /*printf("%c",g);
    while(g!='A' || g!='B' || g!='C'){
        scanf("%c",&g);
       // g=toupper(g);
    }*/
    printf("donner le nombre des heures supplementaire\n");
    scanf("%i",&n);
    while(n<0){
        printf("donner le nombre des heures supplementaire\n");
        scanf("%i",&n);
    }
    /*if(g=='A'){
        s=600+5*n;
    }
    else{
        if(g=='B'){
            s=700+10*n;
        }
        else{
            s=900+15*n;
        }
    }*/
    switch(g){
        case 'A':
            s=600+5*n;
            printf("votre salaire totale est %i",s);
            break;
        case 'B':
            s=700+10*n;
            printf("votre salaire totale est %i",s);
            break;
        case 'C':
            s=900+15*n;
            printf("votre salaire totale est %i",s);
            break;
        default:
            printf("categorie invalide");
    }
}