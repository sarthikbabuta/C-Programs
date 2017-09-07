#include<stdio.h>
int main()
{
	int i,arr[20],num,pos;
	printf("enter size of array");
	scanf("%d",&num);
	printf("enter number");
	for(i=1;i<=num;i++)
	{
		scanf("%d",&arr[i]);
	}
	num=num+1;
		printf("enter position");
		scanf("%d",&pos);
	for(i=num;i>=pos;i--)
	{
		arr[i]=arr[i-1];
	}
	printf("enter the number");
	scanf("%d",&arr[pos]);
	for(i=1;i<=num;i++)
	{
		printf("%d\t",arr[i]);
	}
	return 0;
}
