#include<stdio.h>
int main()
{
	int flag=0,num,*pnum,i;
	printf("enter the number");
	scanf("%d",&num);
	pnum=&num;
	for(i=2;i<*pnum;i++)
	{
		if(*pnum%i==0)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		printf("composite number");
	}
	else
	{
		printf("prime number");
	}
	return 0;
}
