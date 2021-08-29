#include<stdio.h>
#include<stdlib.h>

int main(){
	FILE *sfp,*dfp;
	int ch;
	sfp = fopen("file1.c","r");
	if(sfp == NULL)
	{
		printf("Error in opening a source file....\n");
		exit(1);
	}
	dfp = fopen("file2.c","w");
	if(dfp == NULL)
	{
		printf("Error in openng a destination file....\n");
		exit(1);
	}
	while((ch=fgetc(sfp))!=EOF)
	{
		fputc(ch,dfp);
	}
	fclose(sfp);
	fclose(dfp);
}

	
