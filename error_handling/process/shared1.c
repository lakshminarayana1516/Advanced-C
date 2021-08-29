#include<stdio.h>
#include<sys/ipc.h>
#include<sys/shm.h>

int main(){
	int id;
	id = shmget(4,40,IPC_CREAT|0666);
	perror("shmget");
	printf("%d\n",id);
}

