#include<stdio.h>
int main()
{
	int arr[100],arr2[100],*p=arr,*p1=arr2,i,n;
	printf("Enter size of array:::");
	scanf("%d",&n);
	p=arr;
	p1=arr2;
	printf("Enter array elements for arr:::");
	for(i=0;i<n;i++)
	{
		scanf("%d",(p+i));
	}
	
	for(i=0;i<n;i++)
	{
		*(p1+i)=*(p+i);
	}
	printf("Array elements in arr2::");
	for(i=0;i<n;i++)
	{
		printf("%d ",*(p1+i));
	}
}