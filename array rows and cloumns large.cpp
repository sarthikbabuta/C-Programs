#include<stdio.h>
int main()
{
	int i,j,num,arr[10][10],n,m,large;
	printf("enter the rows size");
	scanf("%d",&n);
	printf("enter the coloumns size");
	scanf("%d",&m);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
		printf("enter the number");
		scanf("%d",&arr[i][j]);
	    }
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			if(arr[i][j]>large)
			{
				large=arr[i][j];
			}
			arr[i][m+1]=large;
		}
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			if(arr[i][j]>large)
			{
				large=arr[i][j];
			}
			arr[n+1][j]=large;
		}
	}
	for(i=1;i<=n+1;i++)
	{
		for(j=1;j<=m+1;j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}	
