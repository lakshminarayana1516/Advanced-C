#include<stdio.h>
#include<stdlib.h>

struct st{
	char name[20];
	int age;
};

int main(){
	FILE *fp;
	struct st person;
	fp = fopen("file1.c","rb");
	if(fp == NULL)
	{
		printf("Error while opening file...\n");
		exit(1);
	}
	fseek(fp,sizeof(person),0);

	fread(&person,sizeof(person),1,fp);
	printf("name: %s\n",person.name);
	printf("age: %d\n",person.age);
	printf("position: %d\n",ftell(fp));
	rewind(fp);
	printf("position: %ld\n",ftell(fp));
	fread(&person,sizeof(person),1,fp);
	printf("name: %s\n",person.name);
	printf("age: %d\n",person.age);
	printf("position: %d\n",ftell(fp));
	fclose(fp);
}
