#include<stdio.h>
int main()
{
	char str[100],str2[100],*p1,*p2;
	int i;
	printf("Enter a string::");
	fgets(str,sizeof(str),stdin);
	p1=str;
	p2=str2;
	
	for(i=0;*p1!='\0';p1++)
	{
		*p2=*p1;
		p2++;
	}
	*p2='\0';
	printf("String after copying::: %s",str2);
return 0;
}