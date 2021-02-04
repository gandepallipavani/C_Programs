#include<stdio.h>
int main()
{
	int arr[100],n,i,*p;
	p=arr;
	printf("Enter array size:::");
	scanf("%d",&n);
	printf("Enter array elements:::");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Actual array:::\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",*(p+i));
	}
	printf("\n\nReverse of an array:::\n");
	for(i=n-1;i>=0;i--)
	{
		printf("%d ",*(p+i));
	}
	return 0;
}	