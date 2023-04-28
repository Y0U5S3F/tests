#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    int pid;
    pid = fork();

    switch(pid){
        case -1: printf("erreur");
        exit(EXIT_FAILURE);
        case 0:printf("je suis fils\n");
        exit(EXIT_SUCCESS);
        default:printf("je suis pere");
        sleep(30);
    }
    return 0;
}