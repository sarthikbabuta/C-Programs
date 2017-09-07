#include<stdio.h>
int main()
{
	int num,arr[10],i;
	printf("enter the size");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		printf("enter the number");
		scanf("%d",&arr[i]);
	}
	num=num+1;
	for(i=num;i>=1;i--)
	{
		arr[i]=arr[i-1];
	}
	printf("enter the 1st element do u want to print");
	scanf("%d",&arr[1]);
	for(i=1;i<=num;i++)
	{
		printf("\t%d",arr[i]);
	}
	return 0;
}
