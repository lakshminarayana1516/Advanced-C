#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/sem.h>

int main()
{
	int id,ret;

	id = semget(4,3,IPC_CREAT|0666);
	perror("semget");
	printf("ID: %d\n",id);

	ret = semctl(id,1,SETVAL,-7);
	perror("semctl");
	printf("ret: %d\n",ret);
}


	
