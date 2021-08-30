#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
	close(1);

	int fd;

	fd = open("data",O_WRONLY|O_CREAT|O_TRUNC,0660);
	if(fd<0)
	{
		perror("open");
	}
	printf("hello...world...\n");
}

