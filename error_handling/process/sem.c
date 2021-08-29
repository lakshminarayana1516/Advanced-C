#include<stdio.h>
#include<sys/sem.h>
#include<sys/ipc.h>
#include<sys/types.h>

int main(){
	int id,ret;

	id = semget(4,2,IPC_CREAT|0666);
	perror("semget");
	printf("semaphore id: %d\n",id);

	ret = semctl(id,1,GETVAL);
	perror("semctl");
	printf("ret: %d\n",ret);
}

