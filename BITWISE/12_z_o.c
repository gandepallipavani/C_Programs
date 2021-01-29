#include<stdio.h>
int main()
{
	int n,z=0,o=0,i;
	printf("Enter a number::");
	scanf("%d",&n);
	for(i=0;i<32;i++)
	{
		if(n&1)
			o++;
		else
			z++;
	n=n>>1;
	}
printf("Number of ones in %d is ::: %d\n",n,o);
printf("Number of zeros in %d is ::: %d",n,z);
}