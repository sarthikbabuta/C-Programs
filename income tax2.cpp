#include<stdio.h>
int main()
{
	int income,tax;
	printf("enter the income");
	scanf("%d",&income);
	if(income<250000)
	{
		printf("No Tax\n");
	}
	else if(income>=250000 && income<500000)
	{
		printf("10 % tax charge is there\n");
		tax=income*10/100;
		printf("Your income after tax is=%d",tax);
	}
	else if(income>=500000 && income<1000000)
	{
		printf("20 % tax charge is there\n");
		tax=income*20/100;
		printf("Your income after tax is=%d",tax);
	}
	else if(income>=1000000)
	{
		printf("30 % tax charge is there\n");
		tax=income*30/100;
		printf("Your income after tax is=%d",tax);
	}
	return 0;	
}
