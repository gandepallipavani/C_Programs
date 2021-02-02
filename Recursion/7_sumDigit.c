#include<stdio.h>
int SumOfDigits(int num)
{
	if(num==0)
		return 0;
	else	
		return ((num%10)+SumOfDigits(num/10));
}

int main()
{
	int n, sum;
	printf("Enter a number::");
	scanf("%d",&n);
	sum=SumOfDigits(n);
	printf("Sum of digits in %d is::: %d",n,sum);
	return 0;
}