#include<unistd.h>
#include<stdio.h>
int main() {
fork();
fork();
fork();
printf("le pid est %d et le ppid est %d\n",getpid(),getppid());
return 0;
}