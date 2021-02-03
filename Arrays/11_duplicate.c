#include<stdio.h>
int main()
{
	int arr[100],i,j,count=0,n;
	printf("Enter size of array::");
	scanf("%d",&n);
	printf("Enter array elements:::");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]==arr[j])
			{
				count++;
				break;
			}
		}		
	}
	printf("Total no.of duplicate elements in an array:: %d",count);
}