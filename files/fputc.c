#include<stdio.h>
#include<stdlib.h>

int main(){
	FILE *fp;
	int ch;
	fp = fopen("file1.c","w");
	if(fp==NULL){
		printf("Error while opening a file...\n");
		exit(1);
	}
	printf("file opend successfully.....\n");
	printf("Enter the data: ");
	while((ch=getchar())!=EOF){
		fputc(ch,fp);
	}
	fclose(fp);
}
	


