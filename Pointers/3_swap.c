#include<stdio.h>
int main()
{
	int n1,n2,temp,*p1,*p2;
	printf("Enter 2 integers:::");
	scanf("%d %d",&n1,&n2);
	p1=&n1;
	p2=&n2;
	printf("Before swapping :: %d %d\n",n1,n2);
	temp=*p1;
	*p1=*p2;
	*p2=temp;
	printf("After swapping:: %d %d\n",n1,n2);
	printf("After swapping from pointers:: %d %d\n",*p1,*p2);
}