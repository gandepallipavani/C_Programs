#include<stdio.h>
int SumOfN(int n)
{
	if(n!=0)
		return n+SumOfN(n-1);
	else
		return n;
}

int main()
{
	int N,sum;
	printf("Enter a number to be printed::");
	scanf("%d",&N);
	sum=SumOfN(N);
	printf("Sum of 1st %d is ::: %d",N, sum);
	return 0;
}