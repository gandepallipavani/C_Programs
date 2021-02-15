//Size of structure without usinf sizeof operator

#include <stdio.h>

struct s1{
    int a; //4
    int b; //4
    char c; //1 and 7 padding 
    int *p; //8
    char *p1; //8
    double long s; //16 
    double long *ss; //8 and 8 padding 
	//total size 64 
}my_struct;
int main() 
{
	struct s1 *ptr=0;
	ptr++;
	printf("%d ",ptr);
	printf("%d ",sizeof(my_struct));
}