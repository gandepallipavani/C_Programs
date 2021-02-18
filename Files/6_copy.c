#include<stdio.h>
#include<stdlib.h>
int main()
{
	int ch;
	FILE *sfptr;
	FILE *dfptr;
	char sPath[100],dPath[100];
	printf("Enter source file path::");
	scanf("%s",sPath);
	printf("Enter destination file path::");
	scanf("%s",dPath);
	sfptr=fopen(sPath,"r");
	dfptr=fopen(dPath,"w");
	
	if(sfptr==NULL || dfptr==NULL)
	{
		printf("Not able to open file\n");
		exit(1);
	}
	ch=fgetc(sfptr);
	while(ch!=EOF)
	{
		fputc(ch,dfptr);
		ch=fgetc(sfptr);
	}
	printf("Files copied successfully");
	fclose(sfptr);
	fclose(dfptr);
	return 0;
}