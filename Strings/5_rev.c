#include<stdio.h>
int main()
{
	char str[100],rev[100],i,j,end;
	printf("Enter string one:::");
	fgets(str, sizeof(str), stdin);
	for(i=0;str[i]!='\0';i++);
	end=i-1;
	for(j=0;j<i;j++)
	{
		rev[j]=str[end];
		end--;
	}
	rev[j]='\0';
	printf("Reverse string:: %s\n",rev);
	
	return 0;
}
	