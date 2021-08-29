#include<pthread.h>
#include<stdio.h>
#include<stdlib.h>
void * routinue(void *ptr)
{
	int type = (int )ptr;
	fprintf(stderr,"type: %d\n",type);
	return ptr;
}

int main(int argc,char **argv)
{
	pthread_t t1,t2;

	int a = 2;
	int b = 3;

	pthread_create(&t1,NULL,routinue,a);
	pthread_create(&t2,NULL,routinue,b);

	pthread_join(t1,NULL);
	pthread_join(t2,NULL);

}



