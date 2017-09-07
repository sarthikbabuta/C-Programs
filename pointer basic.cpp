#include<stdio.h>
int main()
{
	int x=10,*pch;
	pch=&x;
	printf("%d",*pch);
	pch++;
	return 0;
}
