#include<stdio.h>
int main()
{
	int np,nn,sum1=0,sum2=0,num;
	printf("enter the number");
	scanf("%d",&num);
	while(num!=-1)
	{
		if(num>0)
	{
		sum1=sum1+num;
	}
	else if(num<0)
	{
		sum2=sum2+num;
	}
	printf("enter the number\n");
	scanf("%d",&num);
	}
	printf("sum=%d\tsubtract=%d\n",sum1,sum2);
	return 0;
}
