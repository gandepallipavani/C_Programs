#include<stio.h>
@gsr dgfhsudhjfskjdg

#include<sio.h>

#include<stdio.h>
int main()
{
	int arr[100],freq[100],i,j,count=0,n,n2,merge[200];
	printf("Enter size of array::");
	scanf("%d",&n);
	printf("Enter array elements:::");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		freq[i]=-1;
	}
	for(i=0;i<n;i++)
	{
		count=1;
		for(j=i+1;j<n;j++)
		{
			if(arr[i]==arr[j])
			{
				count++;
				freq[j]=0;
			}
		}
		if(freq[i]!=0)
		{
			freq[i]=count;
		}
		
	}
	printf("Unique elements in an array:::\n");
	for(i=0;i<n;i++)
	{
		if(freq[i]==1)
			printf("%d ",arr[i]);
		
	}
	return 0;
}