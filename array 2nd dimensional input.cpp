#include<stdio.h>
int main()
{
	int arr[10][10],n,m,i,j;
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
		printf("%d\t",arr[i][j]);
	    }
	    printf("\n");
	}
	return 0;
}
	
	
	
