#include<stdio.h>
int main(){
	if(fork()==0){
		printf("before\n");
		printf("PID: %d,PPID: %d\n",getpid(),getppid());
		sleep(10);
		printf("After\n");
		printf("PID: %d,PPID: %d\n",getpid(),getppid());
	}
	else{
		printf("In parent\n");
		printf("PID: %d,PPID: %d\n",getpid(),getppid());
	}
}

