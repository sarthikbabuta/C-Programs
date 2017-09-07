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
	for(i=2;i<=num;i++)
	{
		printf("%d\t",arr[i]);
	}
	return 0;
}
