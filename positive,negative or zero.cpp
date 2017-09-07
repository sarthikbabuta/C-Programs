#include<stdio.h>
int main()
{
	int a;
	printf("enter the number");
	scanf("%d",&a);
	if(a==0)
	{
		printf("it is equal to zero");
	}
	else if(a>0)
	{
		printf("it is positive");
	}
	else if(a<0)
	{
		printf("it is negative");
	}
	return 0;
}
