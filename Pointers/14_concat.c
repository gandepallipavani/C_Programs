#include<stdio.h>
int main()
{
	char str1[100],str2[100],*p1,*p2;
	int i;
	printf("Enter string 1:::");
	fgets(str1,sizeof(str1),stdin);
	printf("Enter string 2:::");
	fgets(str2,sizeof(str2),stdin);
	p1=str1;
	p2=str2;
	for(i=0;*p1!='\0';i++)
	{
		p1++;
	}
	for(i=0;*p2!='\0';i++)
	{
		*p1=*p2;
		p1++;
		p2++;
	}
	*p1='\0';
	printf("After concatenation::%s",str1);
return 0;
}