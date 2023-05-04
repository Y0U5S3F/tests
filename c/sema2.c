#include <stdio.h>
#include <sys/sem.h>
void P(int semid) {
struct sembuf op;
op.sem_num = 0; op.sem_op = -1; op.sem_flg = 0;
semop(semid, &op, 1) ;
}

void V(int semid) {
struct sembuf op;
op.sem_num = 0; op.sem_op = 1; op.sem_flg = 0;
semop(semid, &op, 1);
}

void Z(int semid) {
struct sembuf op;
op.sem_num = 0; op.sem_op = 0; op.sem_flg = 0;
semop(semid, &op, 1);
}

void init(int semid, int E) {
semctl(semid, 0, SETVAL, E);
}

int main() {
int i, semid;
int val = 4;
semid = semget(42, 1, IPC_CREAT|0666);
init(semid, val);
for(;;) {
P(semid);
printf("opération P\n");//3210
P(semid);
printf("opération P\n");//210
V(semid);
printf("opération V\n");//321
}
return 0;
}
