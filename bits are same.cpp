#include<stdio.h>
int main()
{
	int num,flag=0;
	printf("enter the num");
	scanf("%d",&num);
	while(num!=0)
	{
		if(num&1==1)
		{
		num=num>>1;
		}
		else
		{
			flag=1;
			break;
		}
	}
		if(flag==0)
		{
			printf("all bits are one");
		}
		else
		 {
		 printf("all bits are not same");	
		}
	return 0;
}
