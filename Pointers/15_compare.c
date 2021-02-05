#include<stdio.h>
int main()
{
	char str1[100],str2[100],*p1,*p2;
	int i,flag;
	printf("Enter string 1:::");
	fgets(str1,sizeof(str1),stdin);
	printf("Enter string 2:::");
	fgets(str2,sizeof(str2),stdin);
	p1=str1;
	p2=str2;
	for(i=0;*p1!='\0' || *p2!='\0';p1++,p2++)
	{
		if(*p1!=*p2)
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
		printf("Strings are same");
	else 
		printf("Strings are not same");
return 0;
}