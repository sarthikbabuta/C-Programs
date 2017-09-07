#include<stdio.h>
int read(int[10][10],int);
int display(int[10][10],int);
int main()
{
	int num,arr[10][10];
	printf("enter the number");
	scanf("%d",&num);
	read(arr,num);
	display(arr,num);
	return 0;
}
int read(int arr[10][10],int num)
{
	int i,j;
		for(i=0;i<num;i++)
	{
		for(j=0;j<num;j++)
		{
			if(i==j)
			{
				arr[i][j]=0;
			}
			else if(i>j)
			{
				arr[i][j]=-1;
			}
			else if(i<j)
			{
				arr[i][j]=1;
			}
		}
	}
}
int display(int arr[10][10],int num)
{
		int i,j;
		for(i=0;i<num;i++)
	{
		for(j=0;j<num;j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
}
