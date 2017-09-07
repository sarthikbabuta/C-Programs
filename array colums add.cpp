#include<stdio.h>
int main()
{
	int i,j,num,arr[10][10],n,m,sum=0;
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
			sum=sum+arr[i][j];
		}
		arr[i][m+1]=sum;
		sum=0;
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m+1;j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	return 0;							
}
