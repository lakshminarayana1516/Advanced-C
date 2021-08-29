#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
int main(){
	int fd[2];
	pipe(fd);
	perror("pipe");
	if(fork()==0){
		//child process
		close(fd[1]);
		char b[15],i;
		while(1){
			read(fd[0],b,sizeof(b));
			for(i=0;b[i];i++)
			{
				if(b[i]>'a' && b[i]<'z')
					b[i] = b[i]-32;

			}
			printf("Data: %s\n",b);
	}
	}
	else{
		//parent process
		close(fd[0]);
		char a[15],ch;
		while(1)
		{
			printf("Enter data: ");
			scanf("%s",a);
			write(fd[1],a,strlen(a)+1);
		}
	}
}

