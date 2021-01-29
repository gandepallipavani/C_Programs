#include<stdio.h>
int main()
{
	int n,b;
	printf("Enter a number:");
	scanf("%d",&n);
	printf("Enter 0 to 31 to toggle the bit ::");
	scanf("%d",&b);
	printf("After toggling bit %d in %d is ::: %d\n",b,n,((1<<b)^n));
	return 0;
}