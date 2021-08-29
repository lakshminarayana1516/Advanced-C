#include<stdio.h>
#include<stdlib.h>

int main(){
	FILE *fp;
	int age;
	char name[20];
	fp = fopen("file1.c","w");
	if(fp == NULL){
		printf("Error while opening a file...\n");
		exit(1);
	}
	printf("Enter the name: ");
	scanf("%s",name);
	printf("Enter the age: ");
	scanf("%d",&age);
	fprintf(fp,"Mi name is %s and age is %d\n",name,age);
	fclose(fp);
}

