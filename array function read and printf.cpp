#include<stdio.h>
int read(int[],int);
int display(int[],int);
int main()
{
	int arr[20],n,num;
	printf("enter the size");
	scanf("%d",&num);
	read(arr,num);
    display(arr,num);
	return 0;
}
int read(int arr[10],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
}
int display(int arr[10],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
}

