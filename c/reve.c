#include <stdio.h>
#include <string.h>
int main()
{
    char str[100], inv[100];
    int m=100,l,i,j,deb,fin;
    do{
        l=0;
        printf("donner 5 mots ");
        fgets(str,m,stdin);
        for(i=0;i<m;i++){
            if(str[i]==' '){
                l++;
            }
        }
    }while(l!=4);    
    l=strlen(str)-1;j=0;deb=l;fin=l;
    while(deb > 0){
        if(str[deb] == ' ')
        {
            i = deb + 1;
            while(i <= fin)
            {
                inv[j] = str[i];
                i++;
                j++;
            }
            inv[j++] = ' ';
            fin = deb - 1;
        }
        deb--;
    }
    for(i=0; i<=fin; i++)
    {
        inv[j] = str[i];
        j++;
    }
    inv[j] = '\0'; 
    printf("str %s", str);
    printf("inv %s", inv);
    return 0;
}