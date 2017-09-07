#include<stdio.h>
int factorial(int);
int main()
{
	int num,out,i;
	printf("enter the num");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
	out=factorial(i);
	printf("%d",out);
    }
	return 0;
}
int factorial(int n)
{
	int fact,i,j;
	for(i=1;i<=n;i++)
	{
	 	fact=fact*i;
	}
	 return fact;
}
