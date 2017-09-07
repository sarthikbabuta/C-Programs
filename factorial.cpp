#include<stdio.h>
int main()
{
	int i,num,fact=1;
	printf("enter the number");
	scanf("%d",&num);
	for(i=num;i>0;i--)
	{
		fact=fact*i;
	}
	printf("factorial is:%d",fact);
	return 0;
}
