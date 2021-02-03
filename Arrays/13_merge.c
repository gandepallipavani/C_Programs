#include<stdio.h>
int main()
{
	int arr1[100],arr2[100],i,j,k,n,n2,merge[200];
	printf("Enter size of array1::");
	scanf("%d",&n);
	printf("Enter array elements:::");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr1[i]);
		merge[i]=arr1[i];
	}
	j=i;
	printf("Enter size of array1::");
	scanf("%d",&n2);
	printf("Enter array elements:::");
	for(i=0;i<n2;i++)
	{
		scanf("%d",&arr2[i]);
		merge[j]=arr2[i];
		j++;
	}
	//k=j;
	printf("Final array after mergging:::\n");
	for(i=0;i<j;i++)
	{
		printf("%d ",merge[i]);
	}
	return 0;
}
	

	