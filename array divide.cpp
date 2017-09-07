#include<stdio.h>
int main()
{
	int num,arr[100],mid,i,j,temp;
	printf("eneter the size");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		printf("enter the number");
		scanf("%d",&arr[i]);
	}
	if(num%2==0)
	{
		mid=num/2;
	}
	else if(num%2==1)
	{
		mid=(num/2)+1;
	}
	for(i=1;i<=mid;i++)
	{
		for(j=1;j<mid;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	temp=0;
		for(i=num;i>=mid+1;i--)
	{
		for(j=num;j>=mid+1;j--)
		{
			if(arr[i]<arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
		for(i=1;i<=num;i++)
	{
		printf("%d",arr[i]);
	}
	

}
