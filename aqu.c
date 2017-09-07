#include<stdio.h>
int main()
{
	const int x=20;
	const int *ptr;
	ptr=&x;
	x++;
	printf("result=%d",*ptr);
	return 0;
}
