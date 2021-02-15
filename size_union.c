//Size of union without usinf sizeof operator

#include <stdio.h>

union s1{
    int a; //4
    int b; //4
    char c; //1 and 7 padding 
    int *p; //8
    char *p1; //8
    double long s; //16 
    double long *ss; //8
	//total size 16
}my_union;
int main() 
{
	union s1 *ptr=0;
	ptr++;
	printf("%d ",ptr);
	printf("%d ",sizeof(my_union));
}
