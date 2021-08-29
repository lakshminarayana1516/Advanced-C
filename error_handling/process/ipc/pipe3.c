#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
int main(){
	int fd[2],c;
	char ch = 'a';
	pipe2(fd,O_NONBLOCK);
	c = 0;
	while(write(fd[1],&ch,1)!=-1)
		c++;
	printf("Size of pipe: %d\n",c);
	close(fd[0]);
	close(fd[1]);
}
