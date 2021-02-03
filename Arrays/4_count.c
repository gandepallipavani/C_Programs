#include<stdio.h>
int main()
{
	int arr[100],i,n,odd=0,even=0;
	printf("Enter sixe of array::");
	scanf("%d",&n);
	printf("Enter array elements:::");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		if(arr[i]%2==0)
			even++;
		else 
			odd++;
	}
	printf("no.of Even elements in an array is ::: %d\n",even);
	printf("no.of Odd elements in an array is :::%d",odd);
return 0;
}
