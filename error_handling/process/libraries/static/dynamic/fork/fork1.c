#include<stdio.h>
#include<unistd.h>

int main(){
	printf("Hii...\n");
	fork();
	printf("PID: %d PPID: %d\n",getpid(),getppid()):wq;
	while(1);
}

