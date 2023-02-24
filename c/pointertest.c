#include<stdio.h>
int main(){
    int i,n;
    printf("%d",sizeof(int));
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int *ptr = malloc(n*4);
    if (ptr==NULL){
        printf("Error allocating memory");
        exit(1);
    }
    else{
        for(i=0;i<n;i++){
            printf("donner l'entier");
            scanf("%d",ptr + i);
        }
        for(i=0;i<n;i++){
            printf("T[%d]=%d\n",i,*(ptr+i));
        }
    }
}