#include<stdio.h>
#define JOIN(A,B) A##B
int main()
{
	int i;
	for(i=1;i<=5;i++)
	{
		printf("\n HI JOIN(user,i)");
	}
}
