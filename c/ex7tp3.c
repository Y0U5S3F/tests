#include<stdio.h>
void main(){
    int m,i,j,n,a[50][50],b[50][50],c[50][50];
    do{
    printf("donner n");
    scanf("%d",&n);
    }while(n<0);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("donner a[%d][%d]",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("donner b[%d][%d]",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    m=0;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            m=m+a[i][j]+b[i][j];
        }
    }
}