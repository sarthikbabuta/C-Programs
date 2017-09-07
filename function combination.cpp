#include<stdio.h>
int comb(int);
int main()
{
	int n,r,result;
	printf("enter n and r");
	scanf("%d%d",&n,&r);
	result=comb(n)/(comb(r)*comb(n-r));
	printf("%d",result);
}
int comb(int num)
{
	int fact=1,i;
	for(i=1;i<=num;i++)
	{
		fact=fact*i;
	}
	return fact;
}
