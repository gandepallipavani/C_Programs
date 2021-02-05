#include<stdio.h>
int main()
{
	char str[500];
	FILE *fp;
	
	fp=fopen("C:/Users/hp/Desktop/C_Programs/Files/test/testing.txt","w");
	printf("Give input to write into file::");
	fgets(str,sizeof(str),stdin);
	
	fputs(str,fp);
	fclose(fp);
	printf("Date written into file and closed successfully");
	
	return 0;
}