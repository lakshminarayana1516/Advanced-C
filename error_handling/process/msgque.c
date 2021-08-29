#include<sys/types.h>
#include<sys/msg.h>
#include<stdio.h>
#include<stdarg.h>
#include<sys/ipc.h>
#include<stdlib.h>

int main(){
	int id;

	id = msgget(IPC_PRIVATE,IPC_CREAT | 0666);
	if(id<0){
		printf("Hello...\n");
		perror("msgget");
		return;
	}
	printf("id: %d\n",id);
}


