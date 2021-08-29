#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<stdlib.h>
#include<string.h>
#include<fcntl.h>
int main(){
	char buf[100];
	printf("Enter the string: ");
	gets(buf);
	int fd,i;
	fd = open("file3.c",O_RDWR);
	if(fd<0)
	{
		printf("Error while opening a file...\n");
		exit(0);
	}
	i = write(fd,buf,strlen(buf));
	printf("i: %d\n",i);
	close(fd);
}
