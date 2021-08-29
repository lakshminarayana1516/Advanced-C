#include<stdio.h>
#include<stdlib.h>

int main()
{
	printf("before fork....\n");
	fork();
	printf("after fork...\n");
}

