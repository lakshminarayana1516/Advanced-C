#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/stat.h>
#include<sys/ipc.h>
#include<sys/shm.h>
#include<errno.h>
#include<sys/types.h>

int main()
{
	int id;
	char *shared_memory;

	id = shmget(3434,0,IPC_CREAT|S_IRWXU);

	if(errno!=0)
	{
		fprintf(stderr,"error occured at ahmget: %s\n",strerror(errno));
	}

	shared_memory = shmat(id,NULL,0);
	if(errno!=0)
	{
		fprintf(stderr,"error occured at shmat: %s\n",strerror(errno));
	}
	printf("data: %s\n",shared_memory);

	shmdt(shared_memory);
	return 0;
}

