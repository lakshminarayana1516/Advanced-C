#include<stdio.h>
#include<string.h>
#include<assert.h>
int main(){
	FILE *fd;
	fd = fopen("abc.cpp","r");
	assert(fd);
	printf("Hello World\n");
			
}
