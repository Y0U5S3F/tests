#include<stdio.h>
int main(void){
    char str[100];
    int i = 0;

    printf("\n Please Enter any String  :  ");
    scanf("%s", str);
        
    while (str[i] != '\0')
    {
        printf("The Character at %d Index Position = %c \n", i, str[i]);
        i++;
    }
    return 0;
}