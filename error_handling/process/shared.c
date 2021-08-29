#include<stdio.h>
#include<sys/ipc.h>
#include<sys/shm.h>

main(){
	int id;
	char *p;
	id = shmget(9,24,IPC_CREAT|0666);
	perror("Shmget");

	p = shmat(id,0,0);
	perror("shmat");
	printf("p = %u\n",p);

	printf("Enter data: ");
	scanf("%s",p);

	shmdt(p);
	perror("shmdt");

}
			
