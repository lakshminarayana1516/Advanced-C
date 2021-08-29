#include<stdio.h>
#include<stdlib.h>

int main(){
	FILE *fp;
	int ch;
	fp = fopen("file1.c","r");
	if(fp == NULL){
		printf("Error while opening a file....\n");
		exit(1);
	}
	printf("File opend successfully...\n");
	while((ch=fgetc(fp))!=EOF){
		printf("%c",ch);
	}
	fclose(fp);
}

