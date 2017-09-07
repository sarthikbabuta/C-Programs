#include<stdio.h>
int main()
{
	int num,arr[20],i;
	printf("enter the size");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
	printf("enter the number");
	scanf("%d",&arr[i]);
	}
	printf("enter the last element");
	scanf("%d",&arr[num+1]);
	for(i=1;i<=num+1;i++)
	{
		printf("\t%d",arr[i]);
	}
	return 0;
}
