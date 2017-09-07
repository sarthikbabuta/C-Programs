#include<stdio.h>
int main()
{
	int num1,num2,divident,divisor,rem;
	printf("enter the number");
	scanf("%d%d",&num1,&num2);
	if(num1>num2)
	{
		divident=num1;
		divisor=num2;
	}
	else 
	{
		divident=num2;
		divisor=num1;
	}
	while(divisor)
	{
		rem=divident%divisor;
		divident=divisor;
		divisor=rem;
	}
	printf("GCD of this %d and %d=%d",num1,num2,divident);
	return 0;
}
