#include<stdio.h>
void main(int)
{
    int x,y;
    printf("donner X et Y\n");
    scanf("%i", &x);
    scanf("%i", &y); 
    if (x%2 ==y%2)
    {
        printf("%i et %i sont de meme pairité", x,y);
    }
    else
    {
        printf("%i et %i ne sont pas de meme pairité", x,y);
    }
}