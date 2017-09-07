#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
int main()
{
	int *arr,n,i;
	printf("enter the number");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
		for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
	free(arr);
	return 0;
}
