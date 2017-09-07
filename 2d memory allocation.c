#include<stdio.h>
int main()
{
	int *arr,n,m,i=0,j=0;
	printf("enter the value of plane");
	scanf("%d%d",&n,&m);
	arr=(int *)malloc(m*n* sizeof(int));
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&(arr+i)[j]);
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",(arr+i)[j]);
		}
	}	
}
	
