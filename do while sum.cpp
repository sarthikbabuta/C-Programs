#include<stdio.h>
int main()
{
	int i,sum=0;
	printf("enter the number");
	scanf("%d",&i);
	do
	{
		printf("%d\n",i);
		sum=sum+i;
		i++;
	}
	while(i<=10);
	{
	printf("your sum is:%d",sum);
    }
	return 0;
}
