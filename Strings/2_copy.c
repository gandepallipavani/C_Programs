#include<stdio.h>
int main()
{
	char str[100],str2[100],i;
	printf("Enter string:::");
	fgets(str, sizeof(str), stdin);
	for(i=0;str[i]!='\0';i++)
	{
		str2[i]=str[i];
	}
	str2[i]='\0';
	printf("String one::%s\n",str);
	printf("String two::%s\n",str2);
	return 0;
}