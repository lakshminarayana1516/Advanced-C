#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
void out1(void)
{
	printf("In out1...\n");
}

void out2(void)
{
	printf("in out2...\n");
}

int main()
{
	atexit(out1);
	atexit(out2);
	sleep(10);
	
}
