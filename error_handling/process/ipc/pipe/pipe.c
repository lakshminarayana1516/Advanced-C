#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int main(){
	int fd[2],r;
        r = pipe(fd);
	if(r !=0){
	printf("Pipe is not created....\n");
	}
  else{
    printf("Pipe created successfully....\n");
  }}    

