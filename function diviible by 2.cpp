#include<stdio.h>
int divisible(int);
int main()
{
	int out,num;
	printf("enter the num");
	scanf("%d",&num);
	out=divisible(num);
	return 0;
}
int divisible(int a)
{
	if(a%2==0)
	{
		printf("divible");
	}
	else
	{
		printf("not divisible");
	}
	return 0;
}
