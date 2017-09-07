#include<stdio.h>
int main()
{
	int flag=0,num,i;
	printf("enter the number");
	scanf("%d",&num);
	for(i=2;i<num/2;i++)
	{
		if(num%i==0)
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
