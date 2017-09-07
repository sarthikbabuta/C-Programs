
#include<stdio.h>
int main()
{
	unsigned int num;
	int result,pos,res;
	printf("enter the number");
	scanf("%d",&num);
	printf("enter position");
	scanf("%d",&pos);
	result=num>>(pos-1);
	if(result&1==1)
	{
		printf("high bit");
	}
	else
	{
		printf("low bit");
	}
	return 0;
}
