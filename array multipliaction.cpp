#include<stdio.h>
int main()
{
	int i,j,k,n,m,p,q,arr1[10][10],arr2[10][10],arr3[10][10]={0};
	printf("enter the rows size of 1st array");
	scanf("%d",&m);
	printf("enter the columns size of 1st array");
	scanf("%d",&n);
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
	  {  
		printf("enter the number of 1st array");
		scanf("%d",&arr1[i][j]);
	  }
    }
	printf("enter the rows of 2nd array");
	scanf("%d",&p);
	printf("enter the columns of 2nd array");
	scanf("%d",&q);
	for(i=1;i<=p;i++)
	{
		for(j=1;j<=q;j++)
		{
		printf("enter the number of 2nd array");
		scanf("%d",&arr2[i][j]);
		}
	}
	if(n!=p)
	{
		printf("matrix cannot be multiply");
		return 0;
	}
	else
	{
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=q;j++)
		{
			for(k=1;k<=p;k++)
			{
				arr3[i][j]=arr3[i][j]+arr1[i][k]*arr2[k][j];
			}
		}
	}
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=q;j++)
		{
			printf("%d ",arr3[i][j]);
		}
		printf("\n");
	}
}
return 0;	
}
