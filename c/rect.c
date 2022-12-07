#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
void main()
{
    int height,i;
    scanf("%d", &height);
    int width,j;
    scanf("%d", &width);
    for(i=0;i<height;i++){
        for(j=1;j<width;j++){
            printf("O");
        }
        printf("O\n");
    }
}