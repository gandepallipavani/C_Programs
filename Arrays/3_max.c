#include<stdio.h>
int main()
{
	int arr[100],n,i,max1=0,max2=0;
	printf("Enter sixe of array::");
	scanf("%d",&n);
	printf("Enter array elements:::");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		if(arr[i]>max1)
		{
			max2=max1;
			max1=arr[i];
		}
		else if(arr[i]>max2 && arr[i]<max1)
		{
			max2=arr[i];
		}
	}
	printf("2nd larget element in an array is :::: %d",max2);
}