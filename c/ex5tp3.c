#include <stdio.h>
int a[10],b[10],c[20];
int i,j,k,n;
int main(void){
    printf("donner n\n");
    scanf("%i",&n);
    printf("donner A[%d]\a",i);
    scanf("%d",&a[i]);
    i=0;
    while(i!=(n-1)){
        i++;
        do{
            printf("donner A[%d]\a",i);
            scanf("%d",&a[i]);
        }while((a[i]<a[i-1]));
    }
    i=0;
    printf("donner B[%d]\n",i);
    scanf("%d",&b[i]); 
    while(i!=(n-1)){
        i++;
        do{
        printf("donner B[%d]\n",i);
        scanf("%d",&b[i]);
        }while((b[i]<b[i-1]));
    }
    i=0;
    j=0;
    k=0;
    for(i=0;i<(n*2);i++){
        if(a[j]<b[k] && j<n && k<n){
            c[i]=a[j];
            j++;
        }
        else{
            c[i]=b[k];
            k++;
        }
    }
    for(i=0;i<(2*n);i++){
        printf("%d ",c[i]);
    }
    return 0;
}