#include<stdio.h>
int main()
{
	int arr[100],i,j,num,temp;
	printf("enter the size");
	scanf("%d",&num);
	printf("enter the number");
	for(i=1;i<=num;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=1;i<=num;i++)
	{
		for(j=1;j<=num-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	printf("The Sorted Array is:");
	for(i=1;i<=num;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
