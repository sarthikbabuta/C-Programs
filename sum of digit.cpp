#include<stdio.h>
int main()
{
	int i,j,sum,nums;
	printf("enter num");
	scanf("%d",&num);
	while(num!=0)
	{
		sum=sum+num%10;
		num=num/10;
	}
	printf("sum:%d",sum);
	return 0;
	
}
