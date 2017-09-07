#include<stdio.h>
int perm(int);
int main()
{
	int n,r,result;
	printf("enter n and r");
	scanf("%d%d",&n,&r);
	result=perm(n)/perm(r);
	printf("%d",result);
}
int perm(int num)
{
	int fact=1,i;
	for(i=1;i<=num;i++)
	{
		fact=fact*i;
	}
	return fact;
}
