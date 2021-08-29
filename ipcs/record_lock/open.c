#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>


int main()
{
	int fd;
	fd = open("file2.c",O_CREAT,0006);
}

