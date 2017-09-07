#include<stdio.h>
int main()
{
	int i,j,num,arr[10],temp;
	printf("enter the size");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		printf("enter the number");
		scanf("%d",&arr[i]);
	}
	temp=arr[num];
	arr[num]=arr[1];
	arr[1]=temp;
	for(i=1;i<=num;i++)
	{
		printf("%d\t",arr[i]);
	}
	return 0;
}
