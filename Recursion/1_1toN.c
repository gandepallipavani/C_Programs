#include<stdio.h>
void OneToN(int n)
{
	if(n)
		OneToN(n-1);
	else
		return;
	printf("%d ",n);
}

int main()
{
	int N;
	printf("Enter a number to be printed::");
	scanf("%d",&N);
	
	printf("Number from 1 to %d::\n",N);
	OneToN(N);
	return 0;
}