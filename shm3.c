#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/ipc.h>
#include<sys/shm.h>
#include<errno.h>

int main()
{
	int id;

	id = shmget(5,128,IPC_CREAT|0666);
	if(id == -1)
	{
		perror("shmget");
		exit(0);
	}

	printf("shared segment id: %d\n",id);
}

