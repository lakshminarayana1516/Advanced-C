#include<stdio.h>   //Input/output
#include<stdlib.h>  // General utilities
#include<unistd.h>  //Symbolic Constants
#include<sys/types.h>  //  Primitive system data types
#include<errno.h>     //Errors
#include<pthread.h>    //POSIX threads
#include<string.h>      //String handling
#include<semaphore.h>    //semaphore

//Prototype for thread routine
void handler (void *ptr);

sem_t mutex;    //Declaring a semaphore variable as mutex
int counter;    //shared variable 

int main()
{
	int i[2];

	pthread_t thread_a;
	pthread_t thread_b;

	i[0] = 0;
	i[1] = 1;

	sem_init(&mutex,0,1);  //  initialize mutex to 1 -binary semaphore 
				// second parameter = 0 - semahore is local
         
	pthread_create(&thread_a,NULL,handler,&i[0]);
	pthread_create(&thread_b,NULL,handler,&i[1]);

	pthread_join(thread_a,NULL);
	pthread_join(thread_b,NULL);

	sem_destroy(&mutex);   //destroyy  semaphore
}

void handler (void *ptr)
{
	int x;
	x = *((int *)ptr);
	printf("Thread %d: Waiting to enter critical region....\n",x);

	sem_wait(&mutex);    //down semaphore.....
	//start Critical Region ....
	printf("Thread %d: Now in critical region....\n",x);
	printf("Thread %d: Counter Value: %d\n",x,counter);
	printf("Thread %d:  Incrementing counter...\n",x);
	counter++;
	printf("Thread %d: New Counter Value: %d\n",x,counter);
	printf("Thread %d: Exiting Critical region....\n",x);
	//End Critical Region
	
	sem_post(&mutex);   //up semaphore

	pthread_exit(0);
}







