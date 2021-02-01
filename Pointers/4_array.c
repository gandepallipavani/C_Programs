#include<stdio.h>
int main()
{
	int n,arr[100],i;
	int *ptr=arr;
	
	printf("Enter array size::");
	scanf("%d",&n);
	printf("Enter array elements:::");
	for(i=0;i<n;i++)
	{
		scanf("%d",ptr);
		ptr++;
	}
	ptr=arr;
	printf("Array elements are:::");
	for(i=0;i<n;i++)
	{
		printf("%d ",*ptr);
		ptr++;
	}
	return 0;
}