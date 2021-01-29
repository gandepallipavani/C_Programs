#include<stdio.h>
int main()
{
	int n,b;
	printf("Enter a number:");
	scanf("%d",&n);
	printf("Enter 0 to 31 to get the bit status::");
	scanf("%d",&b);
	printf("bit %d in %d is ::: %d\n",b,n,((n>>b)&1));
	return 0;
}