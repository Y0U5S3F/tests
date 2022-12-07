#include<stdio.h>
int n,i,val;
int t[50];
int main(){
    //scan de n
    printf("donner la taille de tableau \n");
    scanf("%d",&n);
    //remplissage de tab a condition
    for(i=0;i<n;i++){
        printf("donner T[%d] : ",i);
        scanf("%d",&t[i]);
        while(t[i]<0){
            printf("donner T[%d] : ",i);
            scanf("%d",&t[i]);
        }
    }
    //scan de val
    printf("donner la valeur a chercher \n");
    scanf("%d",&val);
    for(i=0;i<n;i++){
        if(val==t[i]){
            printf("");
        }
    }

}