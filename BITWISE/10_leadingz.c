#include<stdio.h>
int main()
{
	int n,i,count=0,msb;
	printf("Enter a number::");
	scanf("%d",&n);
	msb=1<<31;
	for(i=0;i<32;i++)
	{
		if((n<<i) & msb)
		{
			break;
		}
		count ++;
	}
	printf("Leading zeros in %d is::: %d",n,count);
	return 0;
}