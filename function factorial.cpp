//factorial of function
#include<stdio.h>
int factorial(int);
int main()
{
	int num,result;
	printf("enter num");
	scanf("%d",&num);
	result=factorial(num);
	printf("factorial is:%d",result);
	return 0;
}
int factorial(int n)
{
	if(n==1)
	{
		return 1;
	}
	else
	{
		return n*factorial(n-1);
	}
}
