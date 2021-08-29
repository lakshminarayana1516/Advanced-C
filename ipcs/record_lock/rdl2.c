#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
	struct flock V;

	int i,fd;
	fd = open("file1.c",O_RDWR|O_APPEND,0666);
	char arr[] = "ABCDEFHGJTIDKDFDMKCK";

	V.l_type = F_WRLCK;
	V.l_whence = SEEK_SET;
	V.l_start = 0;
	V.l_len = 0;
	printf("before..\n");
	fcntl(fd,F_SETLKW,&V);

	printf("after..\n");

	write(fd,arr,30);



	V.l_type = F_UNLCK;

	fcntl(fd,F_SETLKW,&V);

	printf("done...\n");
}


