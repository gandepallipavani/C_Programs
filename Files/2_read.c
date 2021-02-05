#include<stdio.h>
#include<stdlib.h>
int main()
{
	char ch;
	FILE *fp;
	
	fp=fopen("C:/Users/hp/Desktop/C_Programs/Files/test/testing.txt","r");
	if(fp==NULL)
	{
	printf("File not exist or not having read permissions\n");
	exit(1);
	}
	printf("File opened successfully\n");
	do{
		ch=fgetc(fp);
		printf("%c",ch);
	}while(ch!=EOF);
	fclose(fp);
return 0;
}