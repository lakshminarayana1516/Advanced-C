#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>

void *fun1(void *args)
{
	printf("sleeping for 200 secs....\n");
	sleep(200);
	printf("thread wokeup...\n");
	return NULL;
}

void *fun2(void *args)
{
	printf("waiting 3 seconds to cancel the thread..\n");
	sleep(3);
	pthread_cancel((pthread_t)args);
	printf("killed....\n");
	return NULL;
}

int main()
{
	pthread_t t1,t2;
	printf("creating threads...\n");
	pthread_create(&t1,NULL,fun1,NULL);
	pthread_create(&t2,NULL,fun2,(void *)t1);
	printf("threads created...\n");
	pthread_join(t2,NULL);
	pthread_join(t1,NULL);
}

