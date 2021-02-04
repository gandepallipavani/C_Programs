#include<stdio.h>
int main()
{
	int n,emask,omask,odd,even;
	printf("Enter a number::");
	scanf("%d",&n);
	emask=0xAAAAAAAA;
	omask=0x55555555;
	even=(n& emask);
	odd=(n& omask);
	n=((even>>1) | (odd<<1));
	printf("Number after swapping even odd bits:: %d",n);
	return 0;
}
	