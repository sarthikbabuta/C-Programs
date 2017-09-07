#include<stdio.h>
int main()
{
	int reverse=0,num,rem,temp,sum;
	printf("enter the num");
	scanf("%d",&num);
	temp=num;
	while(num!=0)
	{
		rem=num%10;
		num=num/10;
		reverse=reverse*10+rem;
		sum=sum+rem;
	}
	if(reverse=temp)
	{
	printf("pallingdrome\n");	
	printf("sum is:%d",sum-1);
	}
	else 
	{
		printf("not pallingdrome\n");
		printf("%d",sum-1);
	}
	return 0;
}
