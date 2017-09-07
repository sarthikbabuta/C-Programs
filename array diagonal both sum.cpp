#include<stdio.h>
int main()
{
	int n,m,arr[10][10],i,j,sum1=0,sum2=0;
	printf("enter the rows size");
	scanf("%d",&n);
	printf("enter the columns size");
	scanf("%d",&m);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			printf("enter the number");
			scanf("%d",&arr[i][j]);
		    if(i==j)
		    {
				sum1+=arr[i][j];
			}
				{
					if(i+j==m+1)
					{
						sum2=sum2+arr[i][j];
					}
				}
		}
	}
	printf("%d %d",sum1,sum2);
	return 0;
}
