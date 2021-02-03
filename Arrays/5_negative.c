#include<stdio.h>
int main()
{
	int arr[100],i,n,neg=0;
	printf("Enter sixe of array::");
	scanf("%d",&n);
	printf("Enter array elements:::");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		if(arr[i]<0)
			neg++;
	}
	printf("no.of negative elements in an array is ::: %d\n",neg);
return 0;
}