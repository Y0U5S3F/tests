#include <stdio.h>
int a[10],b[10],c[20];
int i,j,k,n;
void main(){
    printf("donner n\n");
    scanf("%i",&n);
    printf("donner A[%d]\a",i);
    scanf("%d",&a[i]);
    i=0;
    while(i!=n){
        do{
            printf("donner A[%d]\a",i);
            scanf("%d",&a[i]);
        }while((a[i]<a[i-1]));
        i++;
    }
    i=0;
    printf("donner B[%d]\n",i);
    scanf("%d",&b[i]); 
    while(i!=n){
        do{
        printf("donner B[%d]\n",i);
        scanf("%d",&b[i]);
        }while((b[i]<b[i-1]));
        i++;
    }
    i=0;
    j=0;
    k=0;
    for(i=0;i<2*n;i++){
        if(j<n && k<n){
            if(a[j]<b[k]){
                c[i]=a[j];
                j++;
            }
            else{
                c[i]=b[k];
                k++;
            }
        }
    }
    for(i=0;i<(2*n);i++){
        printf("%d ",c[i]);
    }
}