#include<stdio.h>
int main()
{
	int i,j,n,temp,min,  arr[100];
	printf("Enter size of array");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n-1;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
			if(arr[j]<arr[min])
				min=j;
			temp=arr[min];
			arr[min]=arr[i];
			arr[i]=temp;
	}
	printf("Sorted array:::\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}