#include<stdio.h>
int main()
{
	int x=20;
	const int *ptr;
	ptr=&x;
	printf("result=%d",*ptr);
	return 0;
}
