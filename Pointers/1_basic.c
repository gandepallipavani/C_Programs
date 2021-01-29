#include<stdio.h>
int main()
{
	int n;
	int *ptr;
	ptr=&n;
	n=10;
	printf("Value in n::%d\n",n);
	printf("Address of n::%d\n",&n);
	printf("Address of pointer ptr::%d\n",&ptr);
	printf("n values from pointer::%d\n",*ptr);
	printf("Address of n using pointer ::%d\n",ptr);
}