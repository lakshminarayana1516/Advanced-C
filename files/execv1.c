#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main(int argc,char **argv){
	char *arg[] = {"hi","hello"};
	printf("In execv1......PID: %d\n",getpid());
	execv("./execv2",argv);
	printf("back to execv1...\n");
}

