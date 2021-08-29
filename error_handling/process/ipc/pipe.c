#include<stdio.h>
#include<unistd.h>

int main(){
	int fd[2];
	int status;

	status = pipe(fd);
	if(status == 0){
		printf("pipe created successfully......\n");
	}
	else{
		printf("pipe is not created...\n");
	}
	printf("read End: %d,write End: %d\n",fd[0],fd[1]);
	close(fd[0]);
	close(fd[1]);
}
