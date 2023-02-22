#include<stdio.h>
#include<unistd.h>
int main() {
    int f, i=2;
    f=fork();
    switch(f) {
        case -1 : printf("Erreur dans fork() !!");
            return 1;
        case 0 : /* C’est le processus fils */
            i ++;
            printf ("Processus fils i= %d\n",i);
            break;
        default : /* C’est le processus père */
            i --;
            printf ("Processus père i = %d\n",i);
            break;
    }
    sleep(5);
    printf ("Fin %d\n",i);
    return 0;
}