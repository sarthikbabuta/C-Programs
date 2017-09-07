#include<stdio.h>
int main()
{
	int i,arr[20],num,pos,j,temp;
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
	printf("\nThe Sorted Array is:");
	for(i=1;i<=num;i++)
	{
		printf("%d",arr[i]);
	}
    
}
