#include<stdio.h>
int main()
{
	int n;
	printf("Enter a number:");
	scanf("%d",&n);
	if(n&1)
		printf("LSB bit is set\n");
	else 
		printf("LSB is not set\n");
return 0;
}