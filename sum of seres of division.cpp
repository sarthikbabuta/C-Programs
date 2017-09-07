#include<stdio.h>
int main()
{
	int num;
	float sum=0,i;
	printf("enter the number");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		sum=sum+1/i;
	}
	printf("sum is%f",sum);
	return 0;
}
