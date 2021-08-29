#include<stdio.h>
#include<sys/ipc.h>
#include<sys/sem.h>
#include<sys/types.h>

int main(){
	int id,ret;

	id = semget(4,2,IPC_CREAT|0666);
	perror("shmget");
	printf("semapore id: %d\n",id);

	ret = semctl(id,1,SETVAL,5);
	perror("semctl");
	printf("ret: %d\n",ret);
}

