#include<stdio.h>
#include<sys/msg.h>
#include<sys/ipc.h>
#include<unistd.h>
#include<sys/types.h>

int main(){
	int id;
	id = msgget(4,IPC_CREAT|0666);
	printf("%d\n",id);
}

