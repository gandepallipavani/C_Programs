#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *fptr;
	char path[100];
	char ch;
	int chars=0, words=0, lines=0;
	
	printf("Enter path");
	scanf("%s",path);
	fptr=fopen(path,"r");
	if(fptr==NULL)
	{
		printf("Not able to open file\n");
		exit(1);
	}
	while((ch=fgetc(fptr))!=EOF)
	{
		chars++;
		if(ch == ' ' || ch== '\t' || ch=='\n' || ch=='\0')
			words++;
		if(ch == '\n' || ch == '\0')
			lines++;
	}
	if (chars>0) //+1 for last word
	{
		words++;
		lines++;
	}
	
	printf("No.of characters::: %d \nNo.of words::: %d \nNo.of lines::: %d \n",chars,words,lines);
	fclose(fptr);
	return 0;
}