#include<stdio.h>
int PrintEvenOrOdd(int start,int end)
{
	if (start>end)
		return 0;
	printf("%d ",start);
	PrintEvenOrOdd(start+2,end);
}	

int main()
{
	int start, end, sum=0;
	printf("Wnter start number:::");
	scanf("%d",&start);
	printf("Enter last number:::");
	scanf("%d",&end);
	printf("Even or odd numbers from given range from %d to %d::::",start,end);
	sum=PrintEvenOrOdd(start,end);
	return 0;
}