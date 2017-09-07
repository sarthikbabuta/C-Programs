#include<stdio.h>
int main()
{
	int i,j,arr[10][10],total=0,avg,n,m;
	printf("enter the students");
	scanf("%d",&m);
	printf("enter the subject");
	scanf("%d",&n);
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf("enter the marks");
			scanf("%d",&arr[i][j]);
		}
	}
	printf("matrix is\n");
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
		{
			total=total+arr[i][j];
		}
		avg=total/n;
		arr[i][n+1]=total;
		arr[i][n+2]=avg;
		total=0;
		avg=0;
	}
	printf("the new matrix is\n");
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n+2;j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
