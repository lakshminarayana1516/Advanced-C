#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<pthread.h>
#include<unistd.h>
#include<semaphore.h>

sem_t semaphore;

void threadfun() 
{
	while(1)
	{
		sem_wait(&semaphore);
		printf("Hello from thread!\n");
		sem_post(&semaphore);
		sleep(1);
	}
}

int main()
{
	pthread_t mythread;
	//initialize semaphore, only to be used with threads in this process, set value to 1
	sem_init(&semaphore,0,1);

	printf("starting thread, semaphore is unlocked...\n");
	pthread_create(&mythread,NULL,threadfun,NULL);

	getchar();

	sem_wait(&semaphore);
	printf("semaphore locked...\n");

	getchar();

	printf("semaphore unlocked...\n");
	sem_post(&semaphore);

	getchar();
	return 0;
}

