#include<stdio.h>
int main()
{
	int arr[100][100],r,c,i,j;
	printf("Enter no.og rows and columns::");
	scanf("%d %d",&r,&c);
	printf("Enter values for 2-D array %dX%d::",r,c);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",(*(arr+i)+j));
		}
	}
	printf("2-D array:::\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",*(*(arr+i)+j));
		}printf("\n");
	}
}