#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>

void *Inc_x(void *ptr)
{
	int *x_ptr = (int *)ptr;
	while(++(*x_ptr)<100);
	printf("x increment finshed......\n");
	return NULL;
}

int main()
{
	int x=0,y=0;
	printf("x: %d,y: %d\n",x,y);

	pthread_t t1;

	if(pthread_create(&t1,NULL,Inc_x,&x))
	{
		printf("Error while creating a thread...\n");
	}

	while(++y<100);
	printf("y increment finshed....\n");

	if(pthread_join(t1,NULL))
	{
		printf("Error while joining a thread...\n");
	}

	printf("x: %d,y: %d\n",x,y);
}
