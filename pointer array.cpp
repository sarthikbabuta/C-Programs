#include<stdio.h>
#include<string.h>
int main()
{
	int arr[10],i,j,*parr,num;
	printf("enter the number");
	scanf("%d",&num);
	parr=arr;
	for(i=0;i<num;i++)
	{
		scanf("%d",parr+i);
	}
	for(i=0;i<num;i++)
	{
		printf("%d",*(parr+i));
	}
}
