#include<stdio.h>
#include<stdlib.h>

void out(void)
{
	printf("atexit out success...\n");
}

int main()
{
	if(atexit(out))
	{
		printf("atExit failed...\n");
	}
}
