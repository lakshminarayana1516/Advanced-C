#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>

#define NUM_THREADS 5

void *printhello(void *ptr)
{
	int tid;
	tid = (int)ptr;
	printf("Hello....%d\n",tid);
	pthread_exit(NULL);
}


int main(int argc,char **argv)
{
	pthread_t t[NUM_THREADS];
	int i,r;
	for(i=0;i<NUM_THREADS;i++)
	{
		printf("In mai...creating thread: %d\n",i);
	 	r = pthread_create(&t[i],NULL,printhello,(void *)i);
		if(r)
		{
			printf("error occured while creating a thread...%d\n",i);
			exit(-1);
		}
	}
	pthread_exit(NULL);
}


