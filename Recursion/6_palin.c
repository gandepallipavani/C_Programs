#include<stdio.h>
int Reverse(int num, int temp)
{
	if(num==0)
		return temp;
	temp=(temp*10)+(num%10);
	return Reverse(num/10,temp);
}

int main()
{
	int n,rev;
	printf("Enter a number:::");
	scanf("%d",&n);
	rev=Reverse(n,0);
	if(rev==n)
		printf("Palindrome");
	else	
		printf("Not Palindrome");
return 0;
}
