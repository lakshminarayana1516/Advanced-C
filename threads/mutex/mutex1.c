#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>

int sum = 0;
pthread_mutex_t mutex;
void *fun()
{
	int i;
	for(i=0;i<100000;i++)
	{
		pthread_mutex_lock(&mutex);
		sum++;
		pthread_mutex_unlock(&mutex);
	}
}

int main()
{
	pthread_t t1,t2,t3;
	pthread_mutex_init(&mutex,NULL);

	pthread_create(&t1,NULL,fun,NULL);
	pthread_create(&t2,NULL,fun,NULL);
	pthread_create(&t3,NULL,fun,NULL);

	pthread_join(t1,NULL);
	pthread_join(t2,NULL);
	pthread_join(t3,NULL);
   	
	pthread_mutex_destroy(&mutex);

	printf("Sum: %d\n",sum);
}

