#include<stdio.h>
int main()
{
	int arr1[100],arr2[100],i,n,neg=0;
	printf("Enter sixe of array::");
	scanf("%d",&n);
	printf("Enter array elements:::");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr1[i]);
	}
	printf("Elements in array2 before copying::::");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr2[i]);
	}
	for(i=0;i<n;i++)
	{
		arr2[i]=arr1[i];
	}
	
	printf("\nElements in array2 after copying::::");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr2[i]);
	}
	return 0;
}