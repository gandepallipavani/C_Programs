#include<stdio.h>
int main()
{
	unsigned int n;
	int i,count=0,temp;
	printf("Enter a number:");
	scanf("%d",&n);
	for(i=0;i<32;i++)
	{
		temp=(n>>i)&1;
		if(temp==1)
			count++;
	}
	if(count%2==1)
		printf("Power of 2");
	else
		printf("Not power of 2");
}