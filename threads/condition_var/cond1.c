
#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
#include<unistd.h>

pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;
int arr[10];
int flags = 0;
pthread_cond_t cond_var = PTHREAD_COND_INITIALIZER;

void *fill()
{
	int i=0;
	printf("in thread1......\n");
	sleep(10);
	printf("enter values..\n");
	for(i=0;i<4;i++)
	{
		scanf("%d",&arr[i]);
	}
	pthread_mutex_lock(&mutex);
	pthread_cond_signal(&cond_var);
	pthread_mutex_unlock(&mutex);
	pthread_exit(NULL);
}

void *readd()
{
	int i = 0;
	printf("in thread2.....\n");
	pthread_mutex_lock(&mutex);
	pthread_cond_wait(&cond_var,&mutex);
	pthread_mutex_unlock(&mutex);
	printf("values filled in array are....\n");
	for(i-0;i<4;i++)
	{
		printf("%d ",arr[i]);
	}
	pthread_exit(NULL);
}

int main()
{
	void *res;
	
	pthread_t t1,t2;
	pthread_create(&t1,NULL,fill,NULL);
	pthread_create(&t2,NULL,readd,NULL);

	pthread_join(t1,&res);
	pthread_join(t2,&res);
}

