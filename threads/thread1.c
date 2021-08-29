#include<pthread.h>
#include<stdio.h>
#include<stdlib.h>

struct st{
	char ch;
	int count;
};

void *fun(void *args)
{
	struct st *ptr = (struct st *)args;
	int i;
	for(i=0;i<ptr->count;i++)
	{
		fputc(ptr->ch,stderr);
	}
	return NULL;
}

int main(){
	pthread_t t1,t2;
	struct st var1,var2;
	var1.ch = 'x';
	var2.ch = 'y';
	var1.count = 3000;
	var2.count = 2000;
	pthread_create(&t1,nclude <stdio.h>
#include <unistd.h>
#include <errno.h>
#include <stdlib.h>
			
			int main()
			{
				int fd[2];
					int status;
					
						status = pipe(fd);
						
							if(status < 0) {
									perror("Pipe Failed:");
											exit(-1);
												}else{
														printf("Pipe creation successfull\n");
															}
															
																close(fd[0]);
																	close(fd[1]);
																	
																		return 0;
			}#include <stdio.h>
#include <unistd.h>
#include <errno.h>
#include <stdlib.h>
	
	int main()
	{
			int fd[2];
				int status;
				
					status = pipe(fd);
					
						if(status < 0) {
									perror("Pipe Failed:");
											exit(-1);
												}else{
															printf("Pipe creation successfull\n");
																}
						
							close(fd[0]);
								close(fd[1]);
								
									return 0;
	}#include <stdio.h>
#include <unistd.h>
#include <errno.h>
#include <stdlib.h>
	
	int main()
	{
			int fd[2];
				int status;
				
					status = pipe(fd);
					
						if(status < 0) {
									perror("Pipe Failed:");
											exit(-1);
												}else{
															printf("Pipe creation successfull\n");
																}
						
							close(fd[0]);
								close(fd[1]);
								
									return 0;
	}#include <stdio.h>
#include <unistd.h>
#include <errno.h>
#include <stdlib.h>
	
	int main()
	{
			int fd[2];
				int status;
				
					status = pipe(fd);
					
						if(status < 0) {
									perror("Pipe Failed:");
											exit(-1);
												}else{
															printf("Pipe creation successfull\n");
																}
						
							close(fd[0]);
								close(fd[1]);
								
									return 0;
	}#include <stdio.h>
#include <unistd.h>
#include <errno.h>
#include <stdlib.h>
	
	int main()
	{
			int fd[2];
				int status;
				
					status = pipe(fd);
					
						if(status < 0) {
									perror("Pipe Failed:");
											exit(-1);
												}else{
															printf("Pipe creation successfull\n");
																}
						
							close(fd[0]);
								close(fd[1]);
								
									return 0;
	}#include <stdio.h>
#include <unistd.h>
#include <errno.h>
#include <stdlib.h>
	
	int main()
	{
			int fd[2];
				int status;
				
					status = pipe(fd);
					
						if(status < 0) {
									perror("Pipe Failed:");
											exit(-1);
												}else{
															printf("Pipe creation successfull\n");
																}
						
							close(fd[0]);
								close(fd[1]);
								
									return 0;
	}#include <stdio.h>
#include <unistd.h>
#include <errno.h>
#include <stdlib.h>
	
	int main()
	{
			int fd[2];
				int status;
				
					status = pipe(fd);
					
						if(status < 0) {
									perror("Pipe Failed:");
											exit(-1);
												}else{
															printf("Pipe creation successfull\n");
																}
						
							close(fd[0]);
								close(fd[1]);
								
									return 0;
	}#include <stdio.h>
#include <unistd.h>
#include <errno.h>
#include <stdlib.h>
	
	int main()
	{
			int fd[2];
				int status;
				
					status = pipe(fd);
					
						if(status < 0) {
									perror("Pipe Failed:");
											exit(-1);
												}else{
															printf("Pipe creation successfull\n");
																}
						
							close(fd[0]);
								close(fd[1]);
								
									return 0;
	}NULL,&fun,(void *)&var1);
	pthread_create(&t2,nclude <stdio.h>
#include <unistd.h>
#include <errno.h>
#include <stdlib.h>
			
			int main()
			{
				int fd[2];
					int status;
					
						status = pipe(fd);
						
							if(status < 0) {
									perror("Pipe Failed:");
											exit(-1);
												}else{
														printf("Pipe creation successfull\n");
															}
															
								
