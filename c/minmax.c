#include<stdio.h>
void main(int)
{
    const int min=-100,max=100;
    float n;
    printf("donner N\n");
    scanf("%f", &n);
    if(n < min)
    {
        printf("%f est inferieur a min", n);
    }
    else 
    {
        if (n > min && n < max)
        {
            printf("%f est compris entre les bornes", n);
        }
        else
        {
                    printf("%f est superieur a max", n);
        }
    }
}