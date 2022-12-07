#include<stdio.h>
#include<math.h>
int a[20],b[20],c[20];
int x,m,i,o,p,M,n,j,k;
void main(){
    printf("donner n\n");
    scanf("%i",&n);
    for(i=0;i<n;i++){
        printf("donner A[%d]\a",i);
        scanf("%d",&a[i]);
        x=x+a[i];
    }
    printf("le tableau est \n");
    m=M=a[0];
    for(i=0;i<n;i++){
        printf("%i ",a[i]);
        if(m>a[i]){
            m=a[i];
        }
        if(M<a[i]){
            M=a[i];
        }
    }
    printf("\nla somme des valeurs est %d \n",x);
    printf("le max est %d \n",M);
    printf("le min est %d \n",m);
    for(i=0;i<n;i++){
        if(a[i]>=0){
            b[j]=a[i];
            j++;
        }
        else{
            c[k]=a[i];
            k++;
        }
    }
    for(i=0;i<j;i++){
        printf("%i ",b[i]);
    }
    printf("\n");
    for(i=0;i<k;i++){
        printf("%i ",c[i]);
    }
}