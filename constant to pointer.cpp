#include<stdio.h>
int main()
{
	const int x=15;
	int *px;
	px=&x;
	printf("the number is=%d",*px);
	return 0;	
}
