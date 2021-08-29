#include<sys/types.h>
#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>

main(){
	if(fork()==0){
		//printf("In chiled...PID: %d\n",getpid());
		printf("In child....\n");
		sleep(20);
		exit(0);
	}
	else{
		int ret,status;
		printf("In parent before wait....\n");
		ret = wait(&status);
		printf("In paren after wait......\n");
		printf("ret: %d, status: %d\n",ret,status);
	}
}
