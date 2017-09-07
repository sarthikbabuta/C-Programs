#include<stdio.h>
int main()
{
	int n,m,arr[10][10],i,j,sum=0;
	printf("enter the rows size");
	scanf("%d",&m);
	printf("enter the columns size");
	scanf("%d",&n);
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
	    {
		printf("enter the number");
		scanf("%d",&arr[i][j]);
	if(i==j)
	    {
		sum=sum+arr[i][j];
	    }
     } 
    }
	printf("sum is=%d",sum);
	return 0;
}
