#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>

int test_value;
pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;

void *fun1()
{
	int i;
	printf("first thread begin...\n");
	for(i=0;i<10;i++)
	{
		pthread_mutex_lock(&mutex);
		test_value++;
		printf("test value in thread1:  %d\n",test_value);
		sleep(5);
		pthread_mutex_unlock(&mutex);
	}
	printf("thread1 ended...\n");
}

void *fun2()
{
	int i;
	printf("thread 2 begins...\n");
	for(i=0;i<10;i++)
	{
		pthread_mutex_lock(&mutex);
		test_value++;
		printf("test value in thread2..: %d\n",test_value);
		sleep(3);
		pthread_mutex_unlock(&mutex);
	}
	printf("thread2 ended....\n");
}

int main()
{
	pthread_t t1,t2;

	pthread_create(&t1,NULL,fun1,NULL);
	pthread_create(&t2,NULL,fun2,NULL);

	pthread_join(t1,NULL);
	pthread_join(t2,NULL);

	printf("Main ended....\n");

}

