#include<stdio.h>
int main()
{
	int i,j,m,n;
	printf("enter the no of rows");
	scanf("%d",&m);
	printf("enter the coloumn");
	scanf("%d",&n);
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf("*");
		}
	printf("\n");
	}
	return 0;
}
