#include<stdio.h>
int main()
{
	float num,i,sum=0;
	printf("enter the number");
	scanf("%f",&num);
	for(i=1;i<=num;i++)
	{
		sum=sum+1/(i*i);
	}
	printf("sum of series 1+1/2+1/3+ +1/%f=%f",num,sum);
	return 0;
}

