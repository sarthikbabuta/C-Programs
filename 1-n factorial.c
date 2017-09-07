//factorial of function
#include<stdio.h>
int factorial(int);
int main()
{
	int num,result,i;
	printf("enter num");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
	result=factorial(i);
	printf("factorial is:%d\n",result);
	}
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
