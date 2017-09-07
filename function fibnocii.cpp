#include<stdio.h>
int fib(int);
int main()
{
	int n,i,result;
	printf("enter the num");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		result=fib(i);
		printf("%d\t",result);
	}
	return 0;
}
int fib(int a)
{
	if(a==0)
	return 0;
	else if(a==1)
	return 1;
	else
	return fib(a-1)+fib(a-2);
}
