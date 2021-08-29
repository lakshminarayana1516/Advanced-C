#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/sem.h>
#include<sys/types.h>

int main()
{
	int id,ret;

	id = semget(4,3,IPC_CREAT|0666);
	perror("semget");
	printf("ID: %d\n",id);

	ret = semctl(id,1,GETVAL);
	perror("semctl");
	printf("Ret: %d\n",ret);
}





