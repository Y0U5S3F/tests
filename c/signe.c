#include<stdio.h>
void main(int)
{
    int a,b;
    printf("donner A et B\n");
    scanf("%i", &a);
    scanf("%i", &b);
    if((a<0 && b>0)||(a>0 && b<0))
    {
        printf("la multiplication de %i par %i donne un resultat negatif",a,b);
    }
    else
    {
        printf("la multiplication de %i par %i donne un resultat positif ",a,b);
    }
}