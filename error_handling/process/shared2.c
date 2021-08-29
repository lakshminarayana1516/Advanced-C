#include<stdio.h>
#include<sys/ipc.h>
#include<sys/shm.h>

int main(){
	int id;
	char *p;
	
	id = shmget(9,24,IPC_CREAT|0666);
	perror("shmget");

	p = shmat(id,0,0);
	perror("shmat");

	printf("p=%u\n",p);

	printf("data: %s\n",p);

	shmdt(p);
	perror("shmdt");
}

