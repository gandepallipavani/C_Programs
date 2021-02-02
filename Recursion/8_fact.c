#include<stdio.h>
unsigned long factorial(int num)
{
	if(num==0)
		return 1;
	else 
		return num*factorial(num-1);
}

int main()
{
	int n;
	unsigned long fact;
	printf("Enter any number:");
	scanf("%d",&n);
	fact=factorial(n);
	printf("Factorial of %d is ::: %d",n,fact);
	return 0;
}

