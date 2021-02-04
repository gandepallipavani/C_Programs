#include<stdio.h>
int main()
{	
	unsigned int n,r,n1,n2;
	printf("Enter a number:");
	scanf("%d",&n);
	printf("Enter number for rotation::");
	scanf("%d",&r);
	n1=((n>>r)|(n<<(32-r)));
	printf("After Right rotation:::%d\n",n1);
	n2=(n<<r)|(n>>(32-r));
	printf("After left rotation::%d",n2);
	return 0;
}