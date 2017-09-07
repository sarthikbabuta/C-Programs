#include<stdio.h>
int main()
{
	int num,hundred,fifty,twenty,ten,five,one;
	printf("enter the num");
	scanf("%d",&num);
	while(num>=100)
	{
		hundred=num/100;
		printf("100 notes are=%d\n",hundred);
		num=num%100;
		break;
	}
	while(num>=50)
	{
		fifty=num/50;
		printf("50 notes are%d\n",fifty);
		num=num%50;
		break;
	}
	while(num>=20)
	{
		twenty=num/20;
		printf("20 notes are%d\n",twenty);
		num=num%20;
		break;
	}
	while(num>=10)
	{
		ten=num/10;
		printf("10 notes are%d\n",ten);
	    num=num%10;
		break;
	}
	while(num>=5)
	{
		five=num/5;
		printf("5 notes are%d\n",five);
	    num=num%5;
		break;
	}
	while(num>=1)
	{
		one=num/1;
		printf("1 notes are%d",one);
		break;
	}
	return 0;
}
