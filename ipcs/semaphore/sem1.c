#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/ipc.h>
#include<sys/sem.h>

int main()
{
	int id;
	
	id = semget(2,3,IPC_CREAT|0666);
	if(id == -1)
	{
		printf("error occured at semget...\n");
	}
	printf("semaphore set created....ID: %d\n",id);
}

