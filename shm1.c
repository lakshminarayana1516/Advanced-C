#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/shm.h>
#include<sys/ipc.h>
int main()
{
	int id;
	id = shmget(4,100,IPC_CREAT|0666);
	if(id==-1)
	{
		perror("shmget");
		exit(0);
	}

	printf("shared segment id: %d\n",id);

	shmctl(id,IPC_RMID,NULL);

	printf("shaared memory is deleted...\n");
}

