#include<stdio.h>
#include<stdlib.h>
#include<sys/ipc.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<sys/shm.h>
#include<unistd.h>
#include<string.h>
#include<errno.h>

int main()
{
	char * shared_memory;
	size_t sh_size = 0x80;
	int id;

	fprintf(stdout,"the system page size is: %d\n",getpagesize());

	id = shmget(3434,sh_size,IPC_CREAT|S_IRWXU);

	if(errno!=0)
		fprintf(stderr,"Anerror occured!.....\n%s\n",strerror(errno));
	fprintf(stdout,"the shared memory ID is: %d\n",id);
	return 0;
}

