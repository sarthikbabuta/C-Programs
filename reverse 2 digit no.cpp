#include<stdio.h>
int main()
{
	int num,count=0;
	scanf("%d",&num);
	while(num!=0)
	{
		if(num&1==1)
		{
			count++;	
		}
		num=num>>1;
	}
		if(count%4==0)
		{
			printf("number doesnot comes to power");
		}
		else
		{
			printf("number come to power");
		}
	return 0;
}
