#include<stdio.h>
int main()
{
	int a=1,b=4;
	int * const ptr=&a;
	ptr=&b;
	printf("result=%d",*ptr);
	return 0;
}
