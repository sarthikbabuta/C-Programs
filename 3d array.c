#include<stdio.h>
int main()
{
	int arr[10][10][10],i,j,k,n,n1,n2;
	printf("enter the value of plane");
	scanf("%d",&n);
	printf("enter the value of row");
	scanf("%d",&n1);
	printf("enter the value of columns");
	scanf("%d",&n2);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n1;j++)
		{
			for(k=0;k<n2;k++)
			{
				printf("enter the value");
				scanf("%d",&arr[i][j][k]);
			}
		}
	}
		for(i=0;i<n;i++)
	{
		for(j=0;j<n1;j++)
		{
			for(k=0;k<n2;k++)
			{
				printf("%d ",arr[i][j][k]);
			}
			printf("\n");
		}
		printf("\n");
	}
	
	return 0;
}
