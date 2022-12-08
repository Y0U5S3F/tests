#include<stdio.h>
#include<string.h>
int saisie();
void charge(int T[],int n);
void search(int T[],int n,int a);
void inver(int T[],int n);
void insert(int T[],int pos);

int main(void){
    int pos,b,T[50],a;
    printf("donner la taille n du tableau: ");
    a=saisie(); 
    charge(T,a);
    printf("donner l'entier a chercher: ");
    scanf("%d",&b);
    search(T,a,b);
    printf("\ndonner la position a modifier: ");
    do{
        scanf("%d",&pos);
    }while(pos>a);
    insert(T,pos);
    inver(T,a);
    return 0;
}
void insert(int T[],int pos){
    int val;
    printf("donner la valeur a ajouter: ");
    scanf("%d",&val);
    T[pos]=val;
}
int saisie(){
    int a;
    do{
        scanf("%d",&a);
    }while(a<1||a>=50);
    return a;
}
void charge(int T[],int n){
    int i;
    for(i=0;i<n;i++){
        printf("donner T[%d]",i);
        scanf("%d",&T[i]);
    }
}
void search(int T[],int n,int a){
    int i,k=0,x,U[50];
    for(i=0;i<n;i++){
        if(a<T[i]){
            U[k]=T[i];
            printf("%d ",T[i]);
            k++;
        }
    }
    x=U[0];
    for(i=0;i<k;i++){
        if(x>U[i]){
            x=U[i];
        }
    }
    printf("\nla valeur minimal superieur est: %d", x);
}
void inver(int T[],int n){
    int aux,i,j;
    for(i=0,j=n-1;i<(n/2);i++,j--){
        aux=T[i];
        T[i]=T[j];
        T[j]=aux;
    }
    for(i=0;i<n;i++){
        printf("%d ",T[i]);
    }
}