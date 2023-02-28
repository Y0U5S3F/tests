#include <stdio.h>
#include <unistd.h>

int main() {
    int pid;
    int i;

    pid = fork(); 

    if (pid == 0) {
        for (i = 6; i <= 10; i++) {
            printf("%d\n", i);
        }
    } else if (pid > 0) {
        for (i = 1; i <= 5; i++) {
            printf("%d\n", i);
        }
    } else {
        printf("Erreur\n");
        return 1;
    }

    return 0;
}
