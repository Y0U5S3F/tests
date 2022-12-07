#include<stdio.h>
#include<string.h>
void main(){
    char str[20],ch;
    int i,j,x;
    printf("donner le mot ");
    scanf("%s",&str);
    j=strlen(str)-1;
    i=0,x=0;
    while((i<j)){
        i++;
        j--;
        if(str[i]!=str[j]){
            x++;
        }
    }
    if(x==0){
        printf("%s est une chaine palindrome",str);
    }
    else{
        printf("%s n'est pas une chaine palindrome",str);
    }
}