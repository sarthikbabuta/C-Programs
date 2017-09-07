#include<stdio.h>
int main()
{
	int i,j,k,l,m=1;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		for(k=3;k>=i;k--)
		{
			printf("  ");
		}
		for(l=m;l>=1;l--)
		{
			printf("%d",l);
		}
		++m;
	    printf("\n");
	}
	return 0;
}
