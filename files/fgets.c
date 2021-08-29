#include<stdio.h>
#include<stdlib.h>
int main(){
	FILE *fp;
	char str[20];
	fp = fopen("file2.c","r");
	if(fp == NULL){
		printf("Error while opening a file...\n");
		exit(1);
	}
	fgets(str,20,fp);
	printf("%s\n",str);
	fclose(fp);
}
