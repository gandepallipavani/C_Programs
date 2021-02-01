#include<stdio.h>
int main()
{
	int arr[100],*ptr=arr,i,n,num,count=0;
	printf("Enter size of array:::");
	scanf("%d",&n);
	printf("Enter array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",(ptr+i));
	}	
	printf("Enter number to search::");
	scanf("%d",&num);
	for(i=0;i<n;i++)
	{
		if(*ptr==num)
		{
			count=1;
			break;
		}
		ptr++;
	}
	if(count==1)
		printf("%d found at %d",num,i);
	else	
		printf("%d Not found",num);
}