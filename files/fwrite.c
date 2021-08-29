#include<stdio.h>
#include<stdlib.h>

struct st{
	char name[20];
	int age;
};

int main(){
	FILE *fp;
	int i,n;
	fp = fopen("file1.c","wb");
	if(fp == NULL)
	{
		printf("Error while opening a file...\n");
		exit(1);
	}
	printf("no of record: ");
	scanf("%d",&n);
	struct st person;
	for(i=0;i<n;i++)
	{
		printf("Enter the name: ");
		scanf("%s",person.name);
		printf("Enter the age: ");
		scanf("%d",&person.age);
		fwrite(&person,sizeof(person),1,fp);
	}
	fclose(fp);
}

	

