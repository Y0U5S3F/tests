#include<stdio.h>
void main()
{
    int x,y,z,aux;
    printf("donner 3 entiers\n");
    scanf("%i",&x);
    scanf("%i",&y);
    scanf("%i",&z);
    if(z>x)
    {
        aux=z;
        z=x;
        x=aux;
    }
    if(z>y)
    {
        aux=z;
        z=y;
        y=aux;
    }
    if(y>x)
    {
        aux=y;
        y=x;
        x=aux;
    }
    printf("%i<%i<%i",z,y,x);
}