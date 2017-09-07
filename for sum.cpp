#include<stdio.h>
int main()
{
	int i,sum=0;
	printf("enter the number");
	
	for(i=1;i<=10;i++)
	{
		printf("%d\n",i);
		sum=sum+i;
	}
	printf("your sum is:%d",sum);
	return 0;
}
