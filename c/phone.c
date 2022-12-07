#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    char S[10];
    do{
        scanf("%s", S);
    }while(strlen(S)!=10);
    printf("(%c%c%c) %c%c%c-%c%c%c%c",S[0],S[1],S[2],S[3],S[4],S[5],S[6],S[7],S[8],S[9]);
    return 0;
}