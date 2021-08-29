#include<stdio.h>
#include<string.h>
#include<errno.h>
#include<unistd.h>
#include<sys/stat.h>
#include<unistd.h>
#include<fcntl.h>

int main(){
	int fd,count;
	char buf[250];
	fd = open("file1.c",O_RDWR);
	if(fd<0){
		printf("Error no: %d\n",fd);
		printf("%s\n",strerror(errno));
	}
	printf("Fd = %d\n",fd);
	count = read(fd,buf,15);
	printf("read count: %d\n",count);
	printf("%s\n",buf);

	strcpy(buf,"Hello World");

	count = write(fd,buf,12);

	printf("count : %d\n",count);
	close(fd);

}

