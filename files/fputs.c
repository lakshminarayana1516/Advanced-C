#include<stdio.h>
#include<stdlib.h>
int main(){
	FILE *fp;
	char str[20];
	fp = fopen("file2.c","a");
	if(fp == NULL){
		printf("Error in opening a file....\n");
		exit(1);
	}
	printf("Enter the String:  ");
	while((gets(str))!=NULL){
	fputs(str,fp);
	}
	fclose(fp);
}

