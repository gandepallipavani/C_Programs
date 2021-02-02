#include<stdio.h>
int main()
{
	char str1[100],str2[100],i,j;
	printf("Enter string one:::");
	fgets(str1, sizeof(str1), stdin);
	printf("Enter string two:::");
	fgets(str2, sizeof(str2), stdin);
	for(i=0;str1[i]!='\0';i++);
	printf("len::%d\n",i);
	for(j=0;str2[j]!='\0';++j,++i)
	{
		str1[i]=str2[j];
	}
	str1[i]='\0';
	printf("\nAfter concatenation:: \n%s",str1);
	puts(str1);
	return 0;
}