#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
	struct flock V;

	char arr[100] = "Hello i am LAkshmi NArayana";

	int i,fd;

	fd = open("file1.c",O_RDWR,0666);

	V.l_type = F_WRLCK;
	V.l_whence = SEEK_SET;
	V.l_start = 0;
	V.l_len= 0;

	printf("before lock...\n");

	fcntl(fd,F_SETLKW,&V);

	printf("After...\n");

	for(i=0;arr[i];i++)
	{
		write(fd,&arr[i],1);
		sleep(1);
	}

	V.l_type = F_UNLCK;
	fcntl(fd,F_SETLKW,&V);

	printf("Done....\n");
}

