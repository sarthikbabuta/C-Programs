#include<stdio.h>
int main()
{
	int reverse,num,temp;
	printf("enter the num");
	scanf("%d",&num);
	temp=num;
	while(num!=0)
	{
	reverse=reverse*10+num%10;
	num=num/10;
	}
	if(reverse==temp)
	{
		printf("palingdrome");
	}
	else
	{
		printf("not palingdrome");
	}
	return 0;
}
