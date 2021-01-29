#include<stdio.h>
int main()
{
	int n,b;
	printf("Enter a number:");
	scanf("%d",&n);
	printf("After flipping bits:: %d\n",~n);
	return 0;
}