#include<stdio.h>
int main()
{
	int i,len=0;
	char str[100],*p;
	p=str;
	printf("Enter string :::");
	fgets(str,sizeof(str),stdin);
	for(i=0;*p!='\0';i++)
	{
		len++;
		p++;
	}
	printf("Length of string:::%d",len);
}