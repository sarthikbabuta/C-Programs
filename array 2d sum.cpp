#include<stdio.h>
int main()
{
	int arr1[10][10],arr2[10][10],arr3[10][10],n,m,i,j;
	static int sum=0;
	printf("enter the size");
	scanf("%d",&n);
	printf("enter the size");
	scanf("%d",&m);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
		printf("enter the number");
		scanf("%d",&arr1[i][j]);
	    }
	}
		for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
		printf("enter the number");
		scanf("%d",&arr2[i][j]);
	    }
	}
		for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{	
		arr3[i][j]=arr1[i][j]+arr2[i][j];
	    }
	}
		for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{	
	    printf("%d",arr3[i][j]);
	    }
	    printf("\n");
	}
	return 0;
}
