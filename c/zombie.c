#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    int pid;
    pid = fork();

    if (pid == -1) {
        printf("Erreur lors de la création du processus fils\n");
        exit(EXIT_FAILURE);
    } else if (pid == 0) {
        execlp("/bin/ls", "ls", "-l", "/", NULL);
        printf("Erreur lors de l'exécution de la commande ls\n");
        exit(EXIT_FAILURE);
    } else {
        wait(NULL);
        printf("Terminé.\n");
        exit(EXIT_SUCCESS);
    }
}