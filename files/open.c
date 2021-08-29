#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<string.h>
#include<stdlib.h>
#include<sys/types.h>
int main(){
	int fd;
	fd = open("file3.c",O_WRONLY);
	if(fd<0){
		printf("Error while opening a file..\n");
		exit(1);
	}
	printf("File opened successfully....\n");
}
