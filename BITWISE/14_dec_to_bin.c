#include<stdio.h>
int main()
{
	int n,i,b[32];
	printf("Enter a number::");
	scanf("%d",&n);
	for(i=31;i>=0;i--)
	{
		b[i]=n&1;
		n=n>>1;
	}
	
	printf("%d in binary format:::\n");
	for(i=0;i<32;i++)
	{
		printf("%d",b[i]);
	}
	return 0;
}