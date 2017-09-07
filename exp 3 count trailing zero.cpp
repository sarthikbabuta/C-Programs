#include<stdio.h>
int main()
{
	int count=0;
	unsigned int num;
	printf("enter the num:");
	scanf("%d",&num);
	while(num!=0)
	{
		if(num&1==0)
		{
			num=num>>1;
			count++;
		}
		else
		{
			break;
		}
	}
	printf("%d",count);
	return 0;
}
