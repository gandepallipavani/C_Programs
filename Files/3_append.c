#include<stdio.h>
#include<stdlib.h>

int main()
{
	char ch;
	FILE *fptr;
	char path[100];
	char append[1000];
	printf("Enter file path:::");
	scanf("%s",path);
	
	fptr=fopen(path,"a");
	
	if(fptr==NULL)
	{
		printf("Not able to open file in %s",path);
		exit(1);
	}
	printf("Enter data to append::");
	fflush(stdin);
	fgets(append, sizeof(append),stdin);
	
	fputs(append,fptr);
	
	fptr=freopen(path,"r",fptr);
	printf("Appended successfully\n");
	//readFile(fptr);
	do{
		ch=fgetc(fptr);
		printf("%c",ch);
	}while(ch!=EOF);
	fclose(fptr);

}