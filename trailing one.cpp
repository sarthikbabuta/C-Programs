#include<stdio.h>
int main()
{
	int count=0;
	unsigned int num;
	printf("enter the num:");
	scanf("%d",&num);
	while(num!=0)
	{
		if(num&1==1)
		{
		count++;
		num=num>>1;
		}
		else
		{
			break;
		}
	}
	printf("%d",count);
	return 0;
}
