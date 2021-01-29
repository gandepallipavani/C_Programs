#include<stdio.h>
int main()
{
	char str[100],len=0,i;
	fgets(str, sizeof(str), stdin);
	for(i=0;str[i]!='\0';i++)
	{
		len++;
	}
	printf("Lenght of the string is :::%d",len-1);
}	