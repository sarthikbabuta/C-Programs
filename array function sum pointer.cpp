#include<stdio.h>
int sum(int *);
int main()
{
	int arr[10],num,out,i;
	printf("enter the size");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		printf("enter the number");
		scanf("%d",&arr[i]);
	}
	for(i=1;i<=num;i++)
	{
		out=sum(&arr[i]);
	}
	printf("%d",out);
	return 0;
}
int sum(int *n)
{
	static int add=0;
	add=add+*n;
	return add;	
}
