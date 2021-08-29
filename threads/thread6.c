#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>

int number = 14;

void *fun(void *args)
{
	while(number)
	{
		sleep(1);
		number--;
		printf("%d %d\n",(int)args,number);
	}
	return NULL;
}

int main()
{
	pthread_t t1,t2,t3;
	pthread_create(&t1,NULL,fun,(void *)111);
	pthread_create(&t2,NULL,fun,(void *)222);
	pthread_create(&t3,NULL,fun,(void *)333);

	pthread_join(t1,NULL);
	pthread_join(t2,NULL);
	pthread_join(t3,NULL);
}

