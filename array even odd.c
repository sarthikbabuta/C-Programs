#include<stdio.h>
int main()
{
	int arr[100],i=0,j=0,k,arr1[100],n;
	printf("enter the number");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter element");
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		if(arr[i]%2!=0)
		{
			arr1[j]=arr[i];
			j++;
		}
	}
		for(i=0;i<n;i++)
	{
		if(arr[i]%2==0)
		{
			arr1[j]=arr[i];
			j++;
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d",arr1[i]);
	}
	
}
