#include<stdio.h>
int SumOfEvenOrOdd(int start,int end)
{
	if (start>end)
		return 0;
	else
		return (start+SumOfEvenOrOdd(start+2,end));
}	

int main()
{
	int start, end, sum=0;
	printf("Wnter start number:::");
	scanf("%d",&start);
	printf("Enter last number:::");
	scanf("%d",&end);
	sum=SumOfEvenOrOdd(start,end);
	printf("Sum of even or odd numbers from given range:::%d",sum);
	return 0;
}