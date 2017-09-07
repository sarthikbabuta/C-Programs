#include<stdio.h>
int main()
{
	int num;
	printf("enter the rupee");
	scanf("%d",&num);
	if(num/100==0)
	{
		printf("your notes of 100 are:%d",num);
	}
	else if(num/50==0)
	{
		printf("your notes of 50 are:%d",num);
	}
	else if(num/10==0)
	{
		printf("your notes of 10 are:%d",num);
	}
	else if(num/5==0)
	{
		printf("your notes of 5 are:%d",num);
	}
	else if(num/2==0)
	{
		printf("your notes of 2 are:%d",num);
	}
	return 0;
}
