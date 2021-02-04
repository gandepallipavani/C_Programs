#include<stdio.h>
int main()
{
	int row,column,mat[100][100],mat2[100][100],sum[100][100];
	int i,j;
	printf("Enter no.of rows and columns:::");
	scanf("%d %d",&row,&column);
	
	printf("Enter matrix 1:::\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
		{
			scanf("%d",(*(mat+i)+j));
		}
	}
	printf("Enter matrix 2:::\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
		{
			scanf("%d",(*(mat2+i)+j));
		}
	}
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
		{
			*(*(sum+i)+j)=*(*(mat+i)+j)+*(*(mat2+i)+j);
		}
	}
	printf("Sum of 2 matrix::\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
		{
			printf("%d ",*(*(sum+i)+j));
		}
		printf("\n");
	}
	return 0;
}