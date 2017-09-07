#include<stdio.h>
int main()
{
	int i,j,num,prime;
	printf("enter num");
	scanf("%d",&num);
	for(i=2;i<=num;i++)
	{
		prime=0;
	for(j=2;j<i-1;j++)
	{
		if(i%j==0)
		{
			prime=1;
		}
	}
		if(prime==0)
		{
			printf("%dprime no\n",i);
		}
	}
	return 0;
}
