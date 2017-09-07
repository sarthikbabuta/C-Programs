#include<stdio.h>
int main()
{
	int i,num,a,sum=0;
	printf("enter the number");
	scanf("%d",&num);
	if(num%2==0)
	{
    for(i=0;i<=num;i+=2)
	{
		a=i*i;
		sum=sum+a;
	}
	printf("sum of square of even no is:%d",sum);
	}
	else 
	{
		printf("your no is not even");
	}
	return 0;
}
