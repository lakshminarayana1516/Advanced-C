#include<stdio.h>
#include<stdlib.h>

int main()
{
	printf("before fork....\n");  //it will print only one time by the parent process
	fork();     //creating a child process using the fork.
	printf("after fork...\n");    // this will print two times once by child and once by parent
}

