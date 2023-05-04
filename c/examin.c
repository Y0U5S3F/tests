#include<stdio.h>
#include<stdlib.h>

typedef struct etudiant{
    int mat;
    char nom[25],prenom[25];
    float note_s1,note_s2,moy_annuelle;
}etudiant;

int main(){
    struct etudiant t[100];
    int i,n,prem,des;
    float moy_gen,moy_max,temp;
    do{
        printf("donner n: ");
        scanf("%d",&n);
    }while(n<2 || n>100);

    for(i=1;i<n+1;i++){
        printf("information etudiant N%d \n",i);
        printf("donner une matricule d'un eleve : ");
        scanf("%d",&t[i].mat);
        printf("donner le nom du %d: ",i);
        scanf("%s", t[i].nom);
        printf("donner le prenom du %d: ",i);
        scanf("%s", t[i].prenom);
        printf("donner le moyenne s1 du %d: ",i);
        scanf("%f",&t[i].note_s1);
        printf("donner le moyenne s2 du %d: ",i);
        scanf("%f",&t[i].note_s2); 
        t[i].moy_annuelle = (t[i].note_s1+t[i].note_s2)/2;
    }

    for(i=1;i<n+1;i++){
        moy_gen+=t[i].moy_annuelle;
    }

    printf("\nla moyenne generale de la section est: %f \n",moy_gen/n);
    
    printf("les etudiants ayant un moyenne >=10: \n");
    for(i=1;i<n+1;i++){
        if(t[i].moy_annuelle>=10){
            printf("matricule :%d  nom :%s\n",t[i].mat,t[i].nom);
        }
    }
    moy_max=t[1].moy_annuelle;
    for(i=1;i<n+1;i++){
        if(t[i].moy_annuelle>moy_max){
            moy_max=t[i].moy_annuelle;
        }
    }
    printf("\nla meilleure moyenne annuelle est %f \n",moy_max);

    temp=t[1].moy_annuelle;
    prem=1;
    for(i=1;i<3;i++){
        if(t[i].moy_annuelle>temp){
            des=prem;
            prem=i;
        }
    }
        printf("etudiant major N1\n");
        printf("matricule :%d  Nom :%s\n",t[prem].mat,t[prem].nom);
        printf("etudiant major N1\n");
        printf("matricule :%d  Nom :%s\n",t[des].mat,t[des].nom);
    return 0;
}