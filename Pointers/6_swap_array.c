#include<stdio.h>
int main()
{
	int arr1[100],arr2[100],*p=arr1,*p1=arr2,i,n;
	printf("Enter size of array:::");
	scanf("%d",&n);
	printf("Enter array elements for arr1:::");
	for(i=0;i<n;i++)
	{
		scanf("%d",(p+i));
	}
	printf("Enter array elements for arr2:::");
	for(i=0;i<n;i++)
	{
		scanf("%d",(p1+i));
	}
	for(i=0;i<n;i++)
	{
		*p=*p+*p1;
		*p1=*p-*p1;
		*p=*p-*p1;
		p++;
		p1++;
	}
	p=arr1;
	p1=arr2;
	printf("Elements in arr1:");
	for(i=0;i<n;i++)
	{
		printf("%d ",*(p+i));
	}
	printf("\nElements in arr2:");
	for(i=0;i<n;i++)
	{
		printf("%d ",*(p1+i));
	}
}