#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
	int  fd,i;
	char arr[5];

	close(0);   // stdin closed.

	fd = open("data",O_RDONLY);

	if(fd<0)
	{
		perror("open");
	}

	for(i=0;i<5;i++)
			scanf("%c",&arr[i]);


	for(i=0;i<5;i++)
	{
		printf("%c ",arr[i]);
	}

	printf("\n");

	close(fd);

}

