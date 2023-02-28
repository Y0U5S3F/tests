#include <stdio.h>
#include <unistd.h>

int main() {
    int pid1, pid2;
    int i;

    pid1 = fork();

    if (pid1 == 0) {
        for (i = 1; i <= 5; i++) {
            printf("%d\n", i);
        }
    } else if (pid1 > 0) {
        pid2 = fork();

        if (pid2 == 0) {
            for (i = 6; i <= 10; i++) {
                printf("%d\n", i);
            }
        }
        else if(pid2==-1){
            printf("Erreur\n");
            return 1;
        }
    } else {
        printf("Erreur\n");
        return 1;
    }

    return 0;
}