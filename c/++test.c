#include <stdio.h>
#include<math.h>
int a[10],b[10],c[10],d[10],f[40];
int i,j,k,n;
void main(){
    printf("donner n\n");
    scanf("%i",&n);
    for(i=0;i<n;i++){
        printf("donner A[%d]\a",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        printf("donner B[%d]\n",i);
        scanf("%d",&b[i]);
    }
    for(i=0;i<n;i++){
        printf("donner C[%d]\n",i);
        scanf("%d",&c[i]);
    }
    for(i=0;i<n;i++){
        printf("donner D[%d]\n",i);
        scanf("%d",&d[i]);
    }        
    for(i=0;i<(4*n);i=i+4){
        f[i]=a[j];
        f[i+1]=b[j];
        f[i+2]=c[j];
        f[i+3]=d[j];
        j++;
    }
        int i,j,c;
    for(i=0;i<(4*n);i++){
        for(j=i+1;j<(n*4);j++)
            if ( f[i] > f[j] ){
                k = f[i];
                f[i] = f[j];
                f[j] = k;
        }
    }
    for(i=0;i<(4*n);i++){
        printf("%d ",f[i]);
    }
}
/*long double h;
const int A=2,B=2;
int l;
void main(){
	printf("%lu\n", sizeof(char));
	printf("%lu\n", sizeof(int));
	printf("%lu\n", sizeof(float));
	printf("%lu\n", sizeof(double));
    printf("%lu\n", sizeof(h));
    if(A!=B){
        printf("A is Not B");
    }
    else{
        printf("nein\n");
    }
    printf("1 walla 2\n");
    scanf("%i",&l);
    switch(l){
        case 1: printf("miboun");
        break;
        case 2: printf("jwk behi");
        break;
        default : printf("nah nah");
    }
}
int main()  {  
    int num, i;  
    printf (" Enter a number to generate the table in C: ");  
    scanf (" %d", &num);  
    printf ("\n Table of %d", num);   
    for ( i = 1; i <= 10; i++)  
    {  
        printf ("\n %d * %d = %d", num, i, (num*i));  
    }  
    return 0;  
}*/