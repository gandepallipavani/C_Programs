

#include<stdio.h>
int SumOfArray(int arr[],int i, int n)
{
	if(i>=n)
		return 0;
	return (arr[i]+SumOfArray(arr,i+1,n));
}	
int main()
{
	int arr[100],n,i,sum;
	printf("Enter sixe of array::");
	scanf("%d",&n);
	printf("Enter array elements:::");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	sum=SumOfArray(arr,0,n);
	printf("Sum of elements in an array::: %d\n",sum);
	return 0;
}