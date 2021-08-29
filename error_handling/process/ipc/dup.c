#include<unistd.h>
#include<stdio.h>
int main(){
	int fd;
	fd = dup(1);
	printf("fd: %d\n",fd);
	write(fd,"Hello World",11);
	write(1,"LAkshmi",7);
}
