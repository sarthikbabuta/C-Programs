#include<stdio.h>
int main()
{
	int i,j,num,prime=0,sum=0;
	printf("enter the number");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
				prime=1;
			}
		}
		if(prime==0)
		{
			sum+=i;
		}
		
	}
	cout<<sum;
	return 0;
}
