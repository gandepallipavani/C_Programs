#include<stdio.h>
int main()
{
	int n,pos1,pos2;
	
	printf("Enter a number::");
	scanf("%d",&n);
	printf("Enter 2 positions::");
	scanf("%d %d",&pos1,&pos2);
	n=(n&(~(1<<pos1))) ;
	n=(n&(~(1<<pos2)));
	printf("After making %d and %d postions zero::%d",pos1,pos2,n);
	return 0;
}