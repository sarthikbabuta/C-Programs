#include<stdio.h>
int main()
{
	int num,arr[20],i,pos;
	printf("enter the size");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
	printf("enter the number");
	scanf("%d",&arr[i]);
	}
	num=num-1;
	printf("enter the position");
	scanf("%d",&pos);
	for(i=pos;i<=num;i++)
	{
		arr[i]=arr[i+1];
	}
	for(i=1;i<=num;i++)
	{
		printf("%d\t",arr[i]);
	}
	return 0;
}
