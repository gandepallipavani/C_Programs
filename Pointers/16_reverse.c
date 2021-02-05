#include<stdio.h>
int main()
{
	char str[100],*p=str;
	int i,len=0;
	printf("Enter a string:::");
	fgets(str,sizeof(str),stdin);
	for(i=0;*(p+i)!='\0';i++)
	{
		len++;
	}
	printf("Reverse of string::");
	for(i=len-1;i>=0;i--)
	{
		printf("%c",*(p+i));
	}
}