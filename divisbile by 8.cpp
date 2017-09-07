#include<stdio.h>
int main()
{
	int a;
	printf("enter the number");
	scanf("%d",&a);
	if(a%8==0)
	{
		printf("divisible by 8");
	}
	else
	{
		printf("not divisible by 8");
	}
	return 0;	
}
