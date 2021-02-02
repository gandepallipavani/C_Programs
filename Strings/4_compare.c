#include<stdio.h>
int main()
{
	char str1[100],str2[100],i,flag=0;
	printf("Enter string one:::");
	fgets(str1, sizeof(str1), stdin);
	printf("Enter string two:::");
	fgets(str2, sizeof(str2), stdin);
	
	for(i=0;str1[i]!='\0' && str2[i]!='\0';i++)
	{
		if(str1[i]!=str2[i])
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		printf("Both strings are same");
	}
	else	
	{
		printf("Both strings are not same");
	}
}
