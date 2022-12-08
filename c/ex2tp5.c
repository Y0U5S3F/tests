#include<stdio.h>

void remplir(int t[],int n);
void printtab(int t[],int n);
int position(int t[],int n,int a);
void supprimer(int t[],int n,int x);

int main(void){
    int n,t[50],a,x;
    printf("donner la taille du tableau");
    scanf("%d",&n);
    remplir(t,n);
    printtab(t,n);
    printf("\ndonner l'entier a effacer");
    scanf("%d",&a);
    x=position(t,n,a);
    while(x!=(-1)){
        supprimer(t,n,x);
        x=position(t,n,a);
        n--;
    }
    printtab(t,n);
    return 0;
}

void remplir(int t[],int n){
    int i;
    for(i=0;i<n;i++){
        printf("donner T[%d]",i);
        scanf("%d",&t[i]);
    }
}

void printtab(int t[],int n){
    int i;
    for(i=0;i<n;i++){
        printf(" %d",t[i]);
    }
}

int position(int t[],int n,int a){
    int i,b;
    for(i=0;i<n;i++){
        if(t[i]==a){
            b=i;
            break;
        }
        else{
            b=(-1);
        }
    }
    return b;
}
void supprimer(int t[],int n,int x){
    int i;
    for(i=x;i<n-1;i++){
        t[i]=t[i+1];
    }
}