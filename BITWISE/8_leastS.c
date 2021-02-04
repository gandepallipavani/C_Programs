#include<stdio.h>
int main()
{
	int n,i,count=0;
	printf("Enter a number::");
	scanf("%d",&n);
	for(i=0;i<32;i++)
	{
		if((n>>i)& 1)
		{
			count=i;
			break;
		}
	}
	printf("Highest order set bit in %d is::: %d",n,count);
	return 0;
}