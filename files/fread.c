#include<stdio.h>
#include<stdlib.h>

struct st{
	char name[20];
	int age;
};

int main(){
	FILE *fp;
	fp = fopen("file1.c","rb");
	if(fp == NULL)
	{
		printf("Error while opening a file....\n");
		exit(1);
	}
	struct st person;
	fread(&person,sizeof(person),1,fp);
	printf("name: %s\n",person.name);
	printf("age: %d\n",person.age);
	fread(&person,sizeof(person),1,fp);
	printf("name: %s\n",person.name);
	printf("age: %d\n",person.age);
	fclose(fp);
}

