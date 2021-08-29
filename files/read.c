#include<stdio.h>
#include<sys/types.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>
int main(){
	int fd,i;
	fd = open("file3.c",O_RDONLY);
	char buf[100];
	i = read(fd,buf,20);
	printf("i: %d\n",i);
	printf("data: %s\n",buf);
	close(fd);
}
