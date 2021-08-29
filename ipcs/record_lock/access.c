#include<stdio.h>
#include<fcntl.h>
#include<errno.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<unistd.h>

int main()
{
	int i;

	i = access("file2.c",R_OK);
	if(i == -1)
	{
		printf("Errno: %d\n",errno);
		perror("Error discription:");
	}
	else
	{
		printf("NO error\n");
	}
}
