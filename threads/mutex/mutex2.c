#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>

int counter = 0;
pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;

void *fun()
{
	pthread_mutex_lock(&mutex);
	counter++;
	printf("counter value: %d\n",counter);
	pthread_mutex_unlock(&mutex);
}

int main()
{
	pthread_t t1,t2;

	if(pthread_create(&t1,NULL,fun,NULL))
	{
		printf("error while creating thread...\n");
	}
	if(pthread_create(&t2,NULL,fun,NULL))
	{
		printf("Error while creating a thread2...\n");
	}

	//pthread_join(t1,NULL);
	//pthread_join(t2,NULL);
	
	exit(0);
}

