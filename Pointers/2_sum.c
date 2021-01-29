#include<stdio.h>
int main()
{
	int n1,n2,sum,*p1,*p2;
	printf("Enter 2 integers:::");
	scanf("%d %d",&n1,&n2);
	p1=&n1;
	p2=&n2;
	sum=*p1+*p2;
	printf("Sum of two numbers::%d",sum);
}